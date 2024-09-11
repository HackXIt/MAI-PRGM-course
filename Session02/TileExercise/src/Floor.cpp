//
// Created by RINI on 11/09/2024.
//

#include "Floor.h"

#include <iostream>
#include <ostream>
#include <random>

#include "BlueTile.h"
#include "GreenTile.h"
#include "RedTile.h"
#include "Tile.h"

Floor::Floor() : Floor(1234) {}

Floor::Floor(unsigned int seed)
{
    std::cout << "Floor ctor START" << std::endl;
    // ++x => no shallow copy is created, ++x is applied to the original, no copy is created
    // x++ => a shallow copy is created, x++ is applied to the original, x is stored in a temporary variable, x is destroyed
    for(int i = 0; i < fieldsize_; ++i)
    {
        for(int j = 0; j < fieldsize_; ++j)
        {
            field_[i][j] = new RedTile();// ... assign one of a new derived Tile object (50/50 either BlueTile or GreenTile not RedTile)
        }
    }
    /*
    srand(seed); // TODO make this random

    int random = rand() % 9;

    // Initialize the tiles with specific Tile classes (BlueTile, GreenTile, RedTile)

    for (int i = 0; i < random; i++) {
        for (int j = 0; j < random; j++) {
            /*
            // Example initialization, replace with actual logic
            if ((i + j) % 3 == 0) {
                tiles[i][j] = BlueTile();
            } else if ((i + j) % 3 == 1) {
                tiles[i][j] = GreenTile();
            } else {
                tiles[i][j] = RedTile();
            }
            */
            // Randomly initialize with either BlueTile or GreenTile

        }
    }
*/
    std::cout << "Floor ctor END" << std::endl;

}

Floor::~Floor()
{
    std::cout << "Floor dtor START" << std::endl;
    for(int i = 0; i < fieldsize_; ++i)
    {
        for(int j = 0; j < fieldsize_; ++j)
        {
            delete field_[i][j];
        }
    }
    std::cout << "Floor dtor END" << std::endl;
}