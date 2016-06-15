#include <stdlib.h>
#include "stdio.h"
#include <iostream>

// Problem 2: Find the sum of all even Fibonacci Numbers below 4 million, with 1 and 2 being the first two numbers 
// of the sequence

using namespace std;

void Problem2(void) {

	int x = 1;
	int y = 2;
	int sum = 2;

	while (x < 4000000 && y < 4000000) {
		x = x + y;
		if (x % 2 == 0) {
			sum += x;
		}
		y = y + x;
		if (y % 2 == 0) {
			sum += y;
		}

		
	}

	cout << "The solution to problem 2 is:" << endl;
	cout << sum << endl;
	cout << " " << endl;

}