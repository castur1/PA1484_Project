#ifndef _TILE_H
#define _TILE_H

#include <lvgl.h>

class Tile
{
public:
    void SetTile(lv_obj_t *tile) {
        this->tile = tile;
    }

protected:
    lv_obj_t *tile;
};

#endif