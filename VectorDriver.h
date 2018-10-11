/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/

/* VectorDriver.h
	Modified By: Ian Kelly
	Date: 10/11/2018

	Desc: Added the following new functions:
	add_numbers
	print_even
	is_present
	sort

*/
typedef unsigned long ulong;

#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// add ten random numbers to the end of the vector
void add_numbers(vector<short> &data){
	for (ulong i = 0; i < 10; i++) {
		data.push_back(rand() / 100);
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// print out every other number starting at 0 ( the even positions )
void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i < data.size() || i < data.size() - 1; i += 2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// return true if the given value is present in the vector ( false if not )
bool is_present(const vector<short> &data, short value) {
	std::vector<short>::const_iterator iter = data.begin();
	while (iter != data.end()) {
		if (*iter == value) {
			return true;
		}
		iter++;
	}
	return false;
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// sort the vector in ascending order
void sort(vector<short> &data) {
	sort(data.begin(), data.end());
}