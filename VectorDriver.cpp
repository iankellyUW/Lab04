/* VectorDriver.cpp
Modified By: Ian Kelly
Date: 10/11/2018

Desc: Added the following new functions:
add_numbers
print_even
is_present
sort

Implemented testing for the functions.

*/

#include "VectorDriver.h"

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	// fill the vector with numbers
	fill_vector(sample_vector);

	// add ten random numbers to the end of the vector twice
	add_numbers(sample_vector);
	add_numbers(sample_vector);

	// add 234 to the end of the vector, and tell us whether or not it is there
	sample_vector.push_back(234);
	if (is_present(sample_vector, 234)) {
		cout << "234 is present." << endl;
	}

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;
	// print the numbers in the even positions
	print_even(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;

	// create a new vector that has the number 34 in it five times
	vector<short> sortvec(5, 34);
	// add five more numbers to the end of the vector
	sortvec.push_back(23);
	sortvec.push_back(21);
	sortvec.push_back(33);
	sortvec.push_back(54);
	sortvec.push_back(22);

	//print the vector
	print(sortvec);
	cout << endl;
	// sort the vector
	sort(sortvec);
	// print the now sorted vector
	print(sortvec);
	cout << endl;

	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");
	return 0;
}
