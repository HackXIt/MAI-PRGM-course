#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <stdlib.h>

#include "GreenTile.h"

class Tile
{
    public:
        Tile(bool tmpMarked);
        virtual ~Tile();
        bool isMarked() const;  //Return if the tile is marked for replacement
        void display() const;   //Prints one character for the color

        virtual char mark() = 0; // Mark the tile for replacement (Should set the marked variable to true)
        virtual char getColor() const = 0; // Return the color of the tile (always one character)

    protected:
        bool marked;      //Defines if the tile is marked to be replaced

    private:

};

#endif // TILE_H
