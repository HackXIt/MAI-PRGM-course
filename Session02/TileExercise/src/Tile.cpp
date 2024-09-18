#include "Tile.h"

Tile::Tile() : marked(false){};

Tile::Tile(bool tmpMarked) : marked(tmpMarked){}

Tile::~Tile()= default;

void Tile::mark()
{
    marked = true;
}

bool Tile::isMarked() const
{
    return marked;
}

std::ostream& operator<<(std::ostream &strm, const Tile &tile)
{
    return strm << (tile.isMarked() ? 'X' : tile.getColor()) << " ";
}