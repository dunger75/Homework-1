#ifndef PLANET_H
#define PLANET_H

#include <iostream>

using namespace std;

class Planet{
    private:
        string name;
        long distance;
        long diameter;
    public:
        Planet();
        Planet(string name,  long diameter, long distance);
        long getDistance();
        long getDiameter();
        string getName();
};



#endif