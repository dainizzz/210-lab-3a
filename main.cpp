// COMSC-210 | Lab 3a | Dainiz Almazan
// IDE used: CLion

#include <iostream>
#include <limits>
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
	cout << "Please enter the restaurant's rating, as a number value:" << endl;
	while (!(cin >> temp.rating)) {
		cout << "Invalid input. Please enter a number rating:" << endl;
		cin.clear();
		//clearing the number of characters inputted by the user
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cout << "Please enter if the restaurant has vegetarian options: 1 for yes, 0 for no:" << endl;
	while (!(cin >> temp.hasVegetarianOptions)) {
		cout << "Invalid input. Please enter 1 for yes or 0 for no:" << endl;
		cin.clear();
		//clearing the number of characters inputted by the user
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	// Placing cin.ignore() here to clear the stream before the next time the function gets used
	cin.ignore();

	return temp;
}

void outputRestaurant(const Restaurant &restaurant) {
	cout << "Name: " << restaurant.name << endl;
	cout << "Address: " << restaurant.address << endl;
	cout << "Cuisine: " << restaurant.cuisineType << endl;
	// Formatting this way for consistency in how ratings are displayed
	cout << "Rating: " << showpoint << restaurant.rating << endl;
	cout << "Vegetarian options: " << boolalpha << restaurant.hasVegetarianOptions << endl;
}
