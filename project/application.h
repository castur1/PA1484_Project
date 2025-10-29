#include <vector>

#include "lvgl.h"
#include "tile.h"

class Application
{
    std::vector<Tile *> tiles;
    lv_obj_t *tileView;

    void ConnectWiFi();
    void AddTile(Tile *newTile);

public:
    Application();
    ~Application();

    void Initialize();
};