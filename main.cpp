/** main.cpp - Generates a preset number of random numbers, inserts them in descending order, then clears said vector and prints in ascending order.
 *  Author:    Riley Waddell
 *  Module:    1
 *  Project:   Homework 1
 *  Problem Statement: Create a vector of numbers, generate and insert several random numbers into that vector in descending order, then print those values in ascending order.
 * 
 *  Algorithm / Plan:
 *  1. Creates an empty vector.
 *  2. Generates random numbers, with the seed being based on the current time.
 *  3. Inserts them in descending order into the vector.
 *  4. Until vector hits predetermined size, repeat steps 2-3.
 *  5. Once full, print the array using back and pop_back functions, indicating the ascending order of those random numbers.
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

//Creates an empty integer vector.
vector <int> elements;

int main(){
    
    srand(time(NULL));

    // Generates and sorts random numbers into the vector.
    do{
        int num = rand() % 10 + 1;

        auto starter = elements.begin();
        while(starter != elements.end() && *starter >= num){
            starter++;
        }
        elements.insert(starter, num);
    }
    while(elements.size()<30);

    //Prints the vector's initial state for proof that it was entered descending.
    cout<< "Initial vector:" << endl;
    for( int i : elements){
        cout << i << endl;
    }


    //Prints the vector in ascending order.
    cout << "============================================" << endl << "Testing ascending order: " << endl;
    for(int i = elements.size(); i > 0; i--){
        cout << elements.back() << endl;
        elements.pop_back();
    }
   

    return 0;

}