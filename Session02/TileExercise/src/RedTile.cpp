//
// Created by RINI on 11/09/2024.
//

#include "RedTile.h"


/*
RedTile :: RedTile()
{
    marked = false; // Alternativ to this->marked = false; or parameter in Tile constructor
}
*/
RedTile::RedTile() : Tile(false)
{

}

/*
{
public:
    Tile();
    virtual ~Tile();
    bool isMarked();  //Return if the tile is marked for replacement
    void display();   //Prints one character for the color



protected:
    bool marked;      //Defines if the tile is marked to be replaced

private:

};
*/

char RedTile::getColor() const
{
    return 'r';
}


