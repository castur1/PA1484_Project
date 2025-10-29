#ifndef _TILE_H
#define _TILE_H

#include <lvgl.h>

class Tile
{
public:
    void SetTile(lv_obj_t *tile)
    {
        this->tile = tile;
    }

    virtual void Initialize() = 0;

protected:
    lv_obj_t *tile;
};

#endif