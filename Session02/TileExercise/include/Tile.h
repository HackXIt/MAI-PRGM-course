#ifndef TILE_H
#define TILE_H

#include <iostream>

class Tile
{
    public:
        Tile();
        explicit Tile(bool tmpMarked);
        virtual ~Tile();
        bool isMarked() const;  //Return if the tile is marked for replacement

        void mark(); // Mark the tile for replacement (Should set the marked variable to true)
        virtual char getColor() const = 0; // Return the color of the tile (always one character)
        //virtual std::ostream& dump(std::ostream& o) const = 0; // toString
        //friend std::ostream& operator<<(std::ostream&, const Tile&);
    protected:
        bool marked;      //Defines if the tile is marked to be replaced

    private:

};

#endif // TILE_H
