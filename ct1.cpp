//============================================================================
// Name        : ct1 (Critical Thinking 1 - option 1)
// Author      : Colleen Ammons
// Description : Simple console application
//				 uses: first name, last name, address, city, zipcode
//============================================================================

#include <iostream>

using namespace std;

std::string firstName, lastName, street, city;
int zip;

int main() {
	std::cout << "First Name: ";
	std::cin >> firstName;

	std::cout << "Last Name: ";
	std::cin >> lastName;

	std::cin.ignore(); // Need this for the getline() function to read input correctly

	std::cout << "Street Address: " << endl;
	std::getline(std::cin, street);

	std::cout << "City: ";
	std::getline(std::cin, city);

	std::cout << "Zip Code: ";
	std::cin >> zip;

	std::cout << "\nInputed info:" << endl;
	std::cout << "Name: " + firstName + " " + lastName<< endl;
	std::cout << "Address: " + street + " " + city + " ";
	std::cout << zip << endl;

	return 0;
}
