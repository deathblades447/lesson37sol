#include "util.h"
#include "linear_search_algo.h"
#define buf 100

int main() {
	int array[buf];

	int size;
	cout << "enter size of array: ";
	cin >> size;

	int value; 
	cout << "enter find value: ";
	cin >> value;

	init(array, size , -20, 50);
	cout << "array: " << convert(array, size) << endl;

	string msg = find_value(array, size, value) ? "yes" : "no";
	cout << "answer: " << msg << endl;

	cout << "first value index is: " 
		<< find_first_value_index(array, size, value) << endl;


	return 0;
}