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
    ~Floor();
    bool isRed() const;
    void markTile(int x, int y) const;
    void replaceTile(int x, int y);
    friend std::ostream& operator<<(std::ostream&, const Floor&);
    //std::ostream& dump(std::ostream& o) const = 0; // toString
protected:
    // ...
private:
    // Floor is initialized with a 2-dimensional array of Tiles
    // The array is a pointer to a pointer to a Tile
    static constexpr int fieldsize_ = 10;
    Tile* field_[fieldsize_][fieldsize_];
};



#endif //FLOOR_H
