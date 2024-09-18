//
// Created by RINI on 11/09/2024.
//

#ifndef BLUETILE_H
#define BLUETILE_H
#include "Tile.h"


class BlueTile : public Tile{
public:
    char getColor() const override;
};



#endif //BLUETILE_H
