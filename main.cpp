// COMSC-210 | Lab 3a | Dainiz Almazan
// IDE used: CLion

#include <iostream>
using namespace std;

struct Restaurant {
	string name;
  	string address;
    string cusineType;
    bool hasVegetarianOptions;
    double rating;
};

// populateRestaurant() gets user input via console and uses it to populate the Restaurant struct's data
// arguments: none
// returns: a populated Restaurant struct
Restaurant populateRestaurant();

// outputRestaurant() displays the data from each of the members in the Restaurant struct in the console
// arguments: a Restaurant struct
// returns: nothing
void outputRestaurant(const Restaurant restaurant);

int main() {
    return 0;
}