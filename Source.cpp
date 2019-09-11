/*
	Tait Whitten
	C++ Fall 2019
	Due: 12 September 2019
	Lab 2: Exploring Output
	Create a program that outputs a checkerboard
*/

#include <iostream>

using namespace std;



int main() {

	// variable declaration
	const string SP = "  *   *   *   *";	// declaring a line starting with a space
	const string AS = "*   *   *   *  ";	// declaring a line starting with a star

	// function call
	cout << SP << endl;	// outputs a line starting with a space
	cout << AS << endl;	// outputs a line starting with a star
	cout << SP << endl;
	cout << AS << endl;
	cout << SP << endl;
	cout << AS << endl;
	cout << SP << endl;
	cout << AS << endl;

	return 0;
}