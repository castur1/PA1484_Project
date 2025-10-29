#ifndef _TILE_H
#define _TILE_H

#include <lvgl.h>

class Tile
{
public:
    virtual ~Tile() = 0;

    void SetTile(lv_obj_t *tile);

protected:
    lv_obj_t *tile;
};

#endif