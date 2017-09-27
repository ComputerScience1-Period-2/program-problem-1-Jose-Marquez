/*
Jose Marquez - September 21, 2017 2nd Period
Assignment Name: Display Text
Introduction into C++ IDE Visual Studios 2015
Create New Project and Display text to console
*/

//Libraries
#include <iostream>
#include <conio.h>

//Namespaces
using namespace std;

//Functions()
void pause() {
	cout << "press any key to continue...";
	while (!_kbhit());
	cout << '\n';
}

//MAIN
void main() {
	char text_1 = 'T';
	char text_2 = 'w';
	char text_3 = 'o';
	//Display Text
	cout << "Period " << text_1 << text_2 << text_3 << endl;
	cout << "Jose Marquez" << endl;
	cout << "Hello World!" << endl;
	pause();
	return;
}