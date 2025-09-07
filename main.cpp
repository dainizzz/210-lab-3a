// COMSC-210 | Lab 3a | Dainiz Almazan
// IDE used: CLion

#include <iostream>
using namespace std;

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
	Restaurant myRestaurant = populateRestaurant();
	outputRestaurant(myRestaurant);

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
	cout << "Please enter the restaurant's rating:" << endl;
	cin >> temp.rating;
	cout << "Please enter if the restaurant has vegetarian options: 1 for yes, 0 for no:" << endl;
	cin >> temp.hasVegetarianOptions;

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