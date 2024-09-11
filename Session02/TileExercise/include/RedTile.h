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

    virtual void mark(); // Marked is false, program will not replace the tile
    virtual char getColor() const = 0;

protected:

};



#endif //REDTILE_H
