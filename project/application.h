#include "lvgl.h"
#include "tile.h"

class Application {
    lv_obj_t *tileView;

    void ConnectWiFi();
    void AddTile(Tile *newTile);

public:
    Application();
    ~Application();

    void Initialize();
};

#if 0
#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include <lvgl.h>

class Tile;

class Application
{
public:
    Application();
    ~Application();

    void Initialize();

private:
    std::vector<Tile *> tiles;
    lv_obj_t *tileView;

    void ConnectWiFi();
    void AddTile(Tile *tile);
};

#endif
#endif