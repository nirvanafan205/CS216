/*
 Program has three functions: upper, lower, and flip
 Accepts C-String as an arguement for the functions
 Lower makes all chars lowercase
 Upper makes all chars uppercase
 Flip does the opposite case
 print them out in the following order
 flip, lower, and upper.

 CS216 
 Matthew Garcia
*/
#include <iostream>

using namespace std;

void upper(char *up);
void lower(char *low);
void flip(char vice);

int main()
{
	cout << "Input no more than 50 letters" << endl;

	const in LENGTH = 50;

	char *letters;

	letters = new char[LENGTH];

	cin.getline(letters, LENGTH);


}

void upper(char *up);
void lower(char *low);
void flip(char vice);
