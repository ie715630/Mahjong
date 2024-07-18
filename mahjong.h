#ifndef MAHJONG_H
#define MAHJONG_H

#include <stdio.h>
#include<string>

// enum class TileGroups {DRAGON, WIND, FLOWER, SYMBOL, BAMBOO, DOT};

struct TileGroup {
    std::string name;
    bool has_a_number;
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
    explicit MahjongTileNumerical(TileGroup tile_group, int value) {
        _tile_group = tile_group;
        _value = value;
        _name = std::to_string(value);
    }
};

#endif