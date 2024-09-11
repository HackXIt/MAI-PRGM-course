## USER
Solve this exercise using C++ language with object oriented program.

## ASSISTANT
Based on the exercise, here’s a structured solution using C++ with object-oriented programming principles:

### Overview of the Task:
1. **Abstract Class `Tile`:** This class will serve as the base for different tile types (`RedTile`, `BlueTile`, `GreenTile`). It includes virtual functions `getColor()` and `mark()`.
2. **Classes Inheriting from `Tile`:** Implement `RedTile`, `BlueTile`, and `GreenTile`, each with specific behavior for `mark()` and `getColor()`.
3. **Class `Floor`:** Manages a 3x3 grid of `Tile` pointers, handles marking and replacing tiles, and ensures all tiles become `RedTile` eventually.
4. **Error Handling:** Use exceptions in `mark` and `replace` functions of `Floor`.

### Implementation:

**Tile.h (Abstract Class)**
```cpp
#ifndef TILE_H
#define TILE_H

class Tile {
public:
    virtual ~Tile() = default;
    virtual char getColor() const = 0;
    virtual void mark() = 0;
    virtual bool isMarked() const = 0;
    virtual void display() const;
protected:
    bool marked;
};

#endif // TILE_H
```

**Tile.cpp**
```cpp
#include "Tile.h"
#include <iostream>

void Tile::display() const {
    std::cout << (marked ? 'X' : getColor()) << " ";
}
```

**RedTile.h**
```cpp
#ifndef REDTILE_H
#define REDTILE_H

#include "Tile.h"

class RedTile : public Tile {
public:
    RedTile();
    char getColor() const override;
    void mark() override;
    bool isMarked() const override { return false; }
};

#endif // REDTILE_H
```

**RedTile.cpp**
```cpp
#include "RedTile.h"

RedTile::RedTile() {
    marked = false;
}

char RedTile::getColor() const {
    return 'R';
}

void RedTile::mark() {
    marked = false;
}
```

**BlueTile.h**
```cpp
#ifndef BLUETILE_H
#define BLUETILE_H

#include "Tile.h"

class BlueTile : public Tile {
public:
    BlueTile();
    char getColor() const override;
    void mark() override;
    bool isMarked() const override { return marked; }
};

#endif // BLUETILE_H
```

**BlueTile.cpp**
```cpp
#include "BlueTile.h"
#include <cstdlib>

BlueTile::BlueTile() {
    marked = (rand() % 2 == 0);
}

char BlueTile::getColor() const {
    return 'B';
}

void BlueTile::mark() {
    marked = true;
}
```

**GreenTile.h**
```cpp
#ifndef GREENTILE_H
#define GREENTILE_H

#include "Tile.h"

class GreenTile : public Tile {
public:
    GreenTile();
    char getColor() const override;
    void mark() override;
    bool isMarked() const override { return marked; }
};

#endif // GREENTILE_H
```

**GreenTile.cpp**
```cpp
#include "GreenTile.h"

GreenTile::GreenTile() {
    marked = true;
}

char GreenTile::getColor() const {
    return 'G';
}

void GreenTile::mark() {
    marked = true;
}
```

**Floor.h**
```cpp
#ifndef FLOOR_H
#define FLOOR_H

#include "Tile.h"

class Floor {
public:
    Floor();
    ~Floor();
    void print() const;
    void mark(int x, int y);
    void replace(int x, int y);
    bool isRed() const;
private:
    Tile* tiles[3][3];
    void initializeTiles();
};

#endif // FLOOR_H
```

**Floor.cpp**
```cpp
#include "Floor.h"
#include "RedTile.h"
#include "BlueTile.h"
#include "GreenTile.h"
#include <iostream>
#include <stdexcept>

Floor::Floor() {
    initializeTiles();
}

Floor::~Floor() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            delete tiles[i][j];
}

void Floor::initializeTiles() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (rand() % 2 == 0)
                tiles[i][j] = new BlueTile();
            else
                tiles[i][j] = new GreenTile();
        }
    }
}

void Floor::print() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            tiles[i][j]->display();
        }
        std::cout << std::endl;
    }
}

void Floor::mark(int x, int y) {
    if (x < 0 || x >= 3 || y < 0 || y >= 3) {
        throw std::invalid_argument("Invalid coordinates");
    }
    tiles[x][y]->mark();
}

void Floor::replace(int x, int y) {
    if (x < 0 || x >= 3 || y < 0 || y >= 3) {
        throw std::invalid_argument("Invalid coordinates");
    }

    if (tiles[x][y]->getColor() == 'G') {
        delete tiles[x][y];
        tiles[x][y] = new BlueTile();
    } else if (tiles[x][y]->getColor() == 'B' && tiles[x][y]->isMarked()) {
        delete tiles[x][y];
        tiles[x][y] = new RedTile();
    }
}

bool Floor::isRed() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (tiles[i][j]->getColor() != 'R')
                return false;
        }
    }
    return true;
}
```

**main.cpp**
```cpp
#include "Floor.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    Floor floor;
    floor.print();

    try {
        while (!floor.isRed()) {
            int x = rand() % 3;
            int y = rand() % 3;
            floor.mark(x, y);
            floor.replace(x, y);
            floor.print();
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
```

This implementation covers the requirements from defining the classes to implementing the `mark`, `replace`, and error handling logic. Let me know if you need further assistance!