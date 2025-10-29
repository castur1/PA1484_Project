#include "lvgl.h"

#include "start_tile.h"

void StartTile::Initialize() {
    lv_obj_t* label = lv_label_create(tile);
    lv_label_set_text(label, "Group 02");
    lv_obj_set_style_text_font(label, &lv_font_montserrat_28, 0);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, -20);

    lv_obj_t* label2 = lv_label_create(tile);
    lv_label_set_text(label2, "Version 0.1.0");
    lv_obj_set_style_text_font(label2, &lv_font_montserrat_28, 0);
    lv_obj_align(label2, LV_ALIGN_CENTER, 0, 20);

    lv_obj_set_style_bg_opa(tile, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(tile, lv_color_black(), 0);
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
    lv_obj_set_style_text_color(label2, lv_color_white(), 0);
}