/*
    Planet.h – Definition of the Planet class for representing planets in the Solar System.

    Author: Riley Waddell
    Module: 1
    Project: Homework 1

    This file outlines the structure for the Planet class, including the private variables as well as their accessors, and details the constructors meant to be available to the user. 
*/


#ifndef PLANET_H
#define PLANET_H

#include <string>

using namespace std;

class Planet {
    private:
        string name;  //Name of the planet
        long diameter;  //Diameter in kilometers
        long distance;  //Distance in kilometers from the sun
        
    public:
        Planet(); 
        Planet(string name,  long diameter, long distance);
        long getDistance();
        long getDiameter();
        string getName();
};



#endif