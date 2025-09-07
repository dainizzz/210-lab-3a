// COMSC-210 | Lab 3a | Dainiz Almazan
// IDE used: CLion

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 4;

struct Restaurant {
	string name;
	string address;
	string cuisineType;
	double rating;
	bool hasVegetarianOptions;
};

// populateRestaurant() gets user input via console and uses it to populate the Restaurant struct's data
// arguments: none
// returns: a populated Restaurant struct
Restaurant populateRestaurant();

// outputRestaurant() displays the data from each of the members in the Restaurant struct in the console
// arguments: a Restaurant struct
// returns: nothing
void outputRestaurant(const Restaurant &restaurant);

int main() {
	Restaurant restaurants[ARRAY_SIZE];

	cout << "Getting restaurant data..." << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "RESTAURANT #" << i + 1 << endl;
		restaurants[i] = populateRestaurant();
	}

	cout << "Displaying restaurant data..." << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "RESTAURANT #" << i + 1 << endl;
		outputRestaurant(restaurants[i]);
	}

	return 0;
}

Restaurant populateRestaurant() {
	Restaurant temp;

	cout << "Please enter the restaurant's name:" << endl;
	getline(cin, temp.name);
	cout << "Please enter the restaurant's address:" << endl;
	getline(cin, temp.address);
	cout << "Please enter the type of cuisine:" << endl;
	getline(cin, temp.cuisineType);
	// TODO: Add data validation for these two inputs
	cout << "Please enter the restaurant's rating:" << endl;
	cin >> temp.rating;
	cout << "Please enter if the restaurant has vegetarian options: 1 for yes, 0 for no:" << endl;
	cin >> temp.hasVegetarianOptions;
	// Placing cin.ignore() here to clear the stream before the next time the function gets used
	cin.ignore();

	return temp;
}

void outputRestaurant(const Restaurant &restaurant) {
	cout << "Name: " << restaurant.name << endl;
	cout << "Address: " << restaurant.address << endl;
	cout << "Cuisine: " << restaurant.cuisineType << endl;
	cout << "Rating: " << restaurant.rating << endl;
	cout << "Vegetarian options: ";
	if (restaurant.hasVegetarianOptions)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
