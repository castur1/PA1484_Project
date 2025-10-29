#include "application.h"
#include "wifi_secrets.h"
#include "start_tile.h"

#include <Arduino.h>
#include "lvgl.h"
#include <WiFi.h>

Application::Application()
{
    this->tileView = lv_tileview_create(lv_scr_act());
    lv_obj_set_size(this->tileView, lv_disp_get_hor_res(NULL), lv_disp_get_ver_res(NULL));
    lv_obj_set_scrollbar_mode(this->tileView, LV_SCROLLBAR_MODE_OFF);
}

Application::~Application()
{
}

void Application::Initialize()
{
    this->ConnectWiFi();

    this->AddTile(new StartTile());
    this->AddTile(new StartTile());
}

void Application::ConnectWiFi()
{
    Serial.printf("Connecting to WiFi SSID: %s\n", WIFI_SSID);
    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    const uint32_t start = millis();
    while (WiFi.status() != WL_CONNECTED && (millis() - start) < 15000)
    {
        delay(250);
    }
    Serial.println();

    if (WiFi.status() == WL_CONNECTED)
    {
        Serial.print("WiFi connected.");
    }
    else
    {
        Serial.println("WiFi could not connect (timeout).");
    }
}

void Application::AddTile(Tile *newTile)
{
    lv_obj_t *lv_tile = lv_tileview_add_tile(this->tileView, this->tiles.size(), 0, LV_DIR_HOR);
    newTile->SetTile(lv_tile);
    newTile->Initialize();

    this->tiles.push_back(newTile);
}