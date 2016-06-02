#include <stdlib.h>
#include "stdio.h"
#include <iostream>

// Problem 1

using namespace std;

int sum = 0;
int end = 1000;
int temp = 0;
int total = 0;


int summer(int num) {
	temp = 1000 / num;

	if (temp*num == 1000) {
		temp -= 1;
	}

	total = (temp * (temp + 1)) / 2;

	total *= num;

	return total;


}




int main(void) {
	int x = 0;
	x += summer(3);
	x += summer(5);
	x -= summer(15);

	cout << x << endl;


	
}






