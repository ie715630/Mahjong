#ifndef MAHJONG_CC
#define MAHJONG_CC

#include "mahjong.h"

int main() {
    printf("Welcome to mahjong\n");

    TileGroup dragon = TileGroup{.name = "Dragon", .has_a_number = false};
    TileGroup wind = TileGroup{.name = "Wind", .has_a_number = false};
    TileGroup flower = TileGroup{.name = "Flower", .has_a_number = false};
    TileGroup symbol = TileGroup{.name = "Symbol", .has_a_number = true};
    TileGroup bamboo = TileGroup{.name = "Bamboo", .has_a_number = true};
    TileGroup dot = TileGroup{.name = "Dot", .has_a_number = true};

    MahjongTile * red_dragon = new MahjongTile(dragon, "Red");
    MahjongTile * green_dragon = new MahjongTile(dragon, "White");
    MahjongTile * white_dragon = new MahjongTile(dragon, "Green");

    MahjongTileNumerical * symbol_1 = new MahjongTileNumerical(symbol, 1);

    red_dragon->print();
    green_dragon->print();
    white_dragon->print();
    symbol_1->print();
    

    return 0;
}

#endif
