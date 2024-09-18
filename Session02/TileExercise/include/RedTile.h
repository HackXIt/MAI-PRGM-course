//
// Created by RINI on 11/09/2024.
//

#ifndef REDTILE_H
#define REDTILE_H
#include "Tile.h"


class RedTile : public Tile
{
public:
    RedTile();
    char getColor() const override;

};



#endif //REDTILE_H
