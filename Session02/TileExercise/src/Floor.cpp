//
// Created by RINI on 11/09/2024.
//

#include "Floor.h"

#include <ctime>
#include <iostream>
#include <ostream>
#include <random>

#include "BlueTile.h"
#include "GreenTile.h"
#include "RedTile.h"
#include "Tile.h"

Floor::Floor() : Floor(time(nullptr)) {}

Floor::Floor(unsigned int seed)
{
    std::cout << "Floor ctor START" << std::endl;
    srand(seed);
    // ++x => no shallow copy is created, ++x is applied to the original, no copy is created
    // x++ => a shallow copy is created, x++ is applied to the original, x is stored in a temporary variable, x is destroyed
    for(int i = 0; i < fieldsize_; ++i)
    {
        for(int j = 0; j < fieldsize_; ++j)
        {
            const bool choice = rand() % 2 == 0;
            // ... assign one of a new derived Tile object (50/50 either BlueTile or GreenTile not RedTile)
            if(choice)
            {
                auto* blue = new BlueTile();
                field_[i][j] = blue;
            }
            else
            {
                auto* green = new GreenTile();
                field_[i][j] = green;
            }
        }
    }
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

bool Floor::isRed() const
{
    for(int i = 0; i < fieldsize_; ++i)
    {
        for(int j = 0; j < fieldsize_; ++j)
        {
            if(field_[i][j]->getColor() != 'r')
            {
                return false;
            }
        }
    }
    return true;
}

void Floor::markTile(int x, int y) const
{
    if(field_[x][y] == nullptr)
    {
        return;
    }
    field_[x][y]->mark();
}

void Floor::replaceTile(int x, int y)
{
    if(field_[x][y] == nullptr)
    {
        throw std::invalid_argument("Tile is nullptr");
    }
    if(field_[x][y]->getColor() == 'r')
    {
        return;
    }
    delete field_[x][y];
    field_[x][y] = new RedTile();
}

std::ostream& operator<<(std::ostream &strm, const Floor &floor)
{
    strm << "Floor dump" << std::endl;
    for(int i = 0; i < floor.fieldsize_; ++i)
    {
        for(int j = 0; j < floor.fieldsize_; ++j)
        {
            strm << (floor.field_[i][j]->isMarked() ? 'X' : floor.field_[i][j]->getColor()) << " ";;
        }
        strm << std::endl;
    }
    return strm << std::endl;
}