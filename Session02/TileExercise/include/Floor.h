//
// Created by RINI on 11/09/2024.
//

#ifndef FLOOR_H
#define FLOOR_H
#include "Tile.h"


class Floor {
public:
    Floor();
    Floor(unsigned int seed);
    virtual ~Floor();
protected:
    // ...
private:
    // Floor is initialized with a 2-dimensional array of Tiles
    // The array is a pointer to a pointer to a Tile
    const static int fieldsize_;
    Tile* field_[fieldsize_][fieldsize_];


};



#endif //FLOOR_H
