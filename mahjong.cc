#ifndef MAHJONG_CC
#define MAHJONG_CC

#include "mahjong.h"

int main() {
    printf("Welcome to mahjong\n\n");

    const TileGroup DRAGON = TileGroup{.name = "Dragon", .has_a_number = false};
    const TileGroup WIND = TileGroup{.name = "Wind", .has_a_number = false};
    const TileGroup FLOWER = TileGroup{.name = "Flower", .has_a_number = false};
    const TileGroup SYMBOL = TileGroup{.name = "Symbol", .has_a_number = true};
    const TileGroup BAMBOO = TileGroup{.name = "Bamboo", .has_a_number = true};
    const TileGroup DOT = TileGroup{.name = "Dot", .has_a_number = true};

    MahjongTile * red_dragon = new MahjongTile(DRAGON, "Red");
    MahjongTile * green_dragon = new MahjongTile(DRAGON, "White");
    MahjongTile * white_dragon = new MahjongTile(DRAGON, "Green");

    MahjongTile * north = new MahjongTile(WIND, "North");
    MahjongTile * south = new MahjongTile(WIND, "South");
    MahjongTile * east = new MahjongTile(WIND, "East");
    MahjongTile * west = new MahjongTile(WIND, "West");

    MahjongTile * winter = new MahjongTile(FLOWER, "Winter");
    MahjongTile * autumn = new MahjongTile(FLOWER, "Autumn");
    MahjongTile * fall = new MahjongTile(FLOWER, "Fall");
    MahjongTile * spring = new MahjongTile(FLOWER, "Spring");

    int kNumTiles = 9;

    MahjongTileNumerical * symbols[9];
    for (int tile_num = 0; tile_num < kNumTiles; tile_num++ ) {
        int tile_number = tile_num + 1;
        symbols[tile_num] = new MahjongTileNumerical(SYMBOL, tile_number);
    }

    MahjongTileNumerical * bamboos[9];
    for (int tile_num = 0; tile_num < kNumTiles; tile_num++ ) {
        int tile_number = tile_num + 1;
        bamboos[tile_num] = new MahjongTileNumerical(BAMBOO, tile_number);
    }

    MahjongTileNumerical * dots[9];
    for (int tile_num = 0; tile_num < kNumTiles; tile_num++ ) {
        int tile_number = tile_num + 1;
        dots[tile_num] = new MahjongTileNumerical(DOT, tile_number);
    }

    red_dragon->print();
    symbols[3]->print();
    bamboos[4]->print();
    dots[5]->print();
    

    return 0;
}

#endif
