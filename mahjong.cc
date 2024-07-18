#ifndef MAHJONG_CC
#define MAHJONG_CC

#include "mahjong.h"

void MahjongSet::create_dragon_tiles() {
    MahjongTile * red_dragon =  new MahjongTile(DRAGON, "Red");
    MahjongTile * green_dragon =  new MahjongTile(DRAGON, "White");
    MahjongTile * white_dragon =  new MahjongTile(DRAGON, "Green");

    int initial_tile_num = _num_tiles;
    for (; (_num_tiles - initial_tile_num) < DRAGON.num_tiles_in_set;) {
        _mahjong_set[_num_tiles++] = red_dragon;
        _mahjong_set[_num_tiles++] = green_dragon;
        _mahjong_set[_num_tiles++] = white_dragon;
    }
}
void MahjongSet::create_wind_tiles() {
    MahjongTile * north = new MahjongTile(WIND, "North");
    MahjongTile * south = new MahjongTile(WIND, "South");
    MahjongTile * east = new MahjongTile(WIND, "East");
    MahjongTile * west = new MahjongTile(WIND, "West");

    int initial_tile_num = _num_tiles;
    for (; (_num_tiles - initial_tile_num) < WIND.num_tiles_in_set;) {
        _mahjong_set[_num_tiles++] = north;
        _mahjong_set[_num_tiles++] = south;
        _mahjong_set[_num_tiles++] = east;
        _mahjong_set[_num_tiles++] = west;
    }
}

void MahjongSet::create_flower_tiles() {

}

void MahjongSet::create_symbol_tiles() {

}
void MahjongSet::create_bamboo_tiles() {
    
}
void MahjongSet::create_dot_tiles() {
    
}

int main() {
    printf("Welcome to mahjong\n\n");

    MahjongSet mahjong_set = MahjongSet();
    mahjong_set.print();

    /*



    int kNumValues = 9;
    MahjongTileNumerical symbols[9];
    for (int tile_num = 0; tile_num < kNumValues; tile_num++ ) {
        int tile_number = tile_num + 1;
        symbols[tile_num] = MahjongTileNumerical(SYMBOL, tile_number);
    }

    MahjongTileNumerical bamboos[9];
    for (int tile_num = 0; tile_num < kNumValues; tile_num++ ) {
        int tile_number = tile_num + 1;
        bamboos[tile_num] = MahjongTileNumerical(BAMBOO, tile_number);
    }

    MahjongTileNumerical dots[9];
    for (int tile_num = 0; tile_num < kNumValues; tile_num++ ) {
        int tile_number = tile_num + 1;
        dots[tile_num] = MahjongTileNumerical(DOT, tile_number);
    }

    red_dragon.print();
    
*/
    return 0;
}

#endif
