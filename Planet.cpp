/*
    Planet.cpp - simulates a planetary body object with information pertaining to the body.

    Author: Riley Waddell
    Module: 1
    Project: Homework 1
    Problem Statement (shared with planets.cpp): Do the same thing as problem #1, but instead of using numbers, 
    use objects of a class which represent the planets and dwarf planets in the Solar System. 

    This class contains the name of a body, its diameter, and its distance from the Sun. It fully defines the functions and the constructors that the outline declared in Planet.h .


*/

#include "Planet.h"

using namespace std;

//Creates an empty Planet object.
Planet::Planet() : name(""), diameter(0), distance(0){}
//Creates a Planet object with the input details.
Planet::Planet(string name, long diameter, long distance) : name(name), diameter(diameter), distance(distance){}

//Gets this planet's name.
string Planet::getName()
{
    return this->name;
}
//Gets this planet's distance from the sun.
long Planet::getDistance()
{
    return this->distance;
}
//Gets this planet's diameter.
long Planet::getDiameter()
{
    return this->diameter;
}