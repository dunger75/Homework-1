/*
    planets.cpp - Simulates a collection of planets and prints their information sorted by distance to the sun ascending.

    Author: Riley Waddell
    Module: 1
    Project: Homework 1
    Problem Statement (shared with Planet.cpp): Do the same thing as problem #1, but instead of using numbers, 
    use objects of a class which represent the planets and dwarf planets in the Solar System.

    Algorithm / Plan:
    1. Create an empty Planet vector.
    2. Insert the given list of planets in the instructions of the assignment. 
    3. Sorts the planets ascending in order of distance from the Sun.
    4. Prints sorted information with formatting to make it neat.
    5. Calculates total diameters and distances, and then prints and formats said totals with the above information.

*/

#include <iostream>
#include <vector>
#include <iomanip>
#include "Planet.cpp"

using namespace std;

//Creates empty Planet vector.
vector <Planet> planets;

//Function definition for inputting planets into the created vector.
void insertPlanet(Planet input){
    planets.insert(planets.begin(), input);
};

int main(){

    
    //Inserts all planetary bodies in the Solar System.
    insertPlanet(Planet("Ceres", 952, 413700000));
    insertPlanet(Planet("Earth", 12756, 149600000));
    insertPlanet(Planet("Eris", 2321, 10125000000));
    insertPlanet(Planet("Haumea", 1220, 6452000000));
    insertPlanet(Planet("Jupiter", 142796, 778300000));
    insertPlanet(Planet("Makemake", 1475, 6850000000));
    insertPlanet(Planet("Mars", 6787, 227900000));
    insertPlanet(Planet("Mercury", 4878, 57900000));
    insertPlanet(Planet("Neptune", 48600, 4497000000));
    insertPlanet(Planet("Pluto", 2302, 5891000000));
    insertPlanet(Planet("Saturn", 120660, 1427000000));
    insertPlanet(Planet("Uranus", 51118, 2831000000));
    insertPlanet(Planet("Venus", 12104, 108200000));

    const char separation = ' ';

    //Sorts vector by ascending order in regard to planetary distance.
    Planet temp;
    for(int i = 0; i < planets.size() -1 ; i++){
        for(int j = 1; j < planets.size(); j++){
            if (planets.at(j).getDistance() < planets.at(j - 1).getDistance()) {
                temp = planets.at(j);
                planets.at(j) = planets.at(j - 1);
                planets.at(j - 1) = temp;
            }
        }
    }

    //Prints formatted information for all planets.
    cout<<"  Solar System Planets by Distance" << endl << endl;
    cout<<"  Planet    Diameter  Dist. to Sun  " << endl;
    cout<<"----------  --------  ------------" << endl;

    for(Planet spatialBody : planets){
        cout << left << setw(10) << setfill(separation) << spatialBody.getName() << right << setw(8) << setfill(separation) << spatialBody.getDiameter() << setw(15) << spatialBody.getDistance() << endl;
    }
    cout<<"----------------------------------" << endl;

    int totalDiameter = 0;
    int totalDistance = 0;

    for(Planet i : planets){
        totalDiameter+=i.getDiameter();
        totalDistance+=i.getDistance();
    }
    cout<<right<<setfill(separation)<<setw(15) << "Total Diameter:" << setw(12) << "   Total Distance:" <<endl;
    cout<<right<<setfill(separation)<<setw(18) << totalDiameter << setw(15) << totalDistance<<endl;


return 0;
}
