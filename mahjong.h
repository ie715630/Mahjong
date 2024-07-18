#ifndef MAHJONG_H
#define MAHJONG_H

#include <stdio.h>
#include<string>
#include<list>

#define TILES_IN_SET 144

// enum class TileGroups {DRAGON, WIND, FLOWER, SYMBOL, BAMBOO, DOT};

struct TileGroup {
    std::string name;
    bool has_a_number;
    int num_tiles_in_set;
};

class MahjongTile {
protected:
    TileGroup _tile_group;
    std::string _name;

public:
    // TODO: Clean constructors
    explicit MahjongTile() {}
    explicit MahjongTile(TileGroup tile_group, std::string name)
             : _tile_group(tile_group), _name(name) {}

    void print() {
        printf("%s %s\n", _name.c_str(), _tile_group.name.c_str());
    }
};

class MahjongTileNumerical : public MahjongTile{
protected:
    int _value;

public:
    // TODO: Clean constructors
    explicit MahjongTileNumerical() {}
    explicit MahjongTileNumerical(TileGroup tile_group, int value) {
        _tile_group = tile_group;
        _value = value;
        _name = std::to_string(value);
    }
};

class MahjongSet {
public:
    MahjongSet() {
        _num_tiles = 0;
        create_dragon_tiles();
        create_wind_tiles();
        create_flower_tiles();
        create_symbol_tiles();
        create_bamboo_tiles();
        create_dot_tiles();
    }

    void print() {
        printf("******Mahjong set******\n");
        for (int num_tile = 0; num_tile < TILES_IN_SET; num_tile++) {
            _mahjong_set[num_tile]->print();
        }
    }

protected:
    MahjongTile * _mahjong_set [TILES_IN_SET];
    int _num_tiles;

    const TileGroup DRAGON = TileGroup{.name = "Dragon", .has_a_number = false, .num_tiles_in_set = 12};
    const TileGroup WIND = TileGroup{.name = "Wind", .has_a_number = false, .num_tiles_in_set = 16};
    const TileGroup FLOWER = TileGroup{.name = "Flower", .has_a_number = false, .num_tiles_in_set = 8};
    const TileGroup SYMBOL = TileGroup{.name = "Symbol", .has_a_number = true, .num_tiles_in_set = 36};
    const TileGroup BAMBOO = TileGroup{.name = "Bamboo", .has_a_number = true, .num_tiles_in_set = 36};
    const TileGroup DOT = TileGroup{.name = "Dot", .has_a_number = true, .num_tiles_in_set = 36};
    
    void create_dragon_tiles();
    void create_wind_tiles();
    void create_flower_tiles();
    void create_symbol_tiles();
    void create_bamboo_tiles();
    void create_dot_tiles();

};

#endif