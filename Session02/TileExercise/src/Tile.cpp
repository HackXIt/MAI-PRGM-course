#include "Tile.h"

Tile::Tile(bool tmpMarked) : marked(tmpMarked){}

Tile::~Tile(){}

void Tile::display() const
{
}

bool Tile::isMarked() const
{
    return marked;
}

void Tile::display()
{
    std::cout << 'X' << " ";
}
