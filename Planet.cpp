/*
    Planet.cpp - simulates a planetary body object with information pertaining to the body.

    Author: Riley Waddell
    Module: 1
    Project: Homework 1
    Problem Statement (shared with planets.cpp): Do the same thing as problem #1, but instead of using numbers, 
    use objects of a class which represent the planets and dwarf planets in the Solar System. 


*/
#include <iostream>
#include "Planet.h"

using namespace std;


        Planet::Planet() : name(""), distance(0), diameter(0){}
        Planet::Planet(string name, long diameter, long distance) : name(name), diameter(diameter), distance(distance){}

        string Planet::getName(){
            return this->name;
        }
        long Planet::getDistance(){
            return this->distance;
        }
        long Planet::getDiameter(){
            return this->diameter;
        }