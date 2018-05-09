#pragma once
#include <iostream>

class Place {
    int x;
    int y;
    Place(int x, int y);
    Place (const Place& otherP);
    int get_X ();
    int get_Y();
};
