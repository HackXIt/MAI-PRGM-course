#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Floor.h"
#include "RedTile.h"

int main()
{
         //Seeding the rand function
    auto floor = Floor();  //Creating the floor

    // FIXME this currently breaks, I am doing something illegal somewhere in the replacement
    while(!floor.isRed())   //Mark and Replace until the whole floor is red
    {
        //Print the floor and then call the mark- and replace-function of a random tile
        std::cout << floor;
        auto x = rand()%10;
        auto y = rand()%10;
        floor.markTile(x, y); //CAUTION: The x coordinate can be invalid
        floor.replaceTile(x, y); //CAUTION: The y coordinate can be invalid
    }

    std::cout << "Finished execution" << std::endl << floor;

    return 0;
}
