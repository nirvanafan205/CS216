#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	fstream File;
	char Char = 'a';
	char ASCII[128] = {0}; 
	int frequency[128];
	string input;

	for(int ASCII = 0; ASCII < 128; ASCII++)
	{
		frequency[ASCII] = 0;
	}

	cout << "Enter file name: ";
	cin >> input;

	File.open(input);

	if(!File) 
	{
		cout << "File not found!" << endl; 
		exit(0);
	}

	while(File)
	{
		if(Char != ' ')
		{
			frequency[Char]++; 
		}
		Char = File.get();
	}

	File.close();

	cout << "\nThe Frequency of the capital letters are: " << endl;

	for(char upper = 65; upper <= 90; upper++)
	{
		cout << "Letter " << upper << " is " << setw(4) << frequency[upper] << endl;
	}

	cout << "\nThe Frequency of the lower case letters are: " << endl;

	for(char lower = 97; lower <= 122; lower++)
	{
		cout << "Letter " << lower << " is " << setw(4) << frequency[lower] << endl;
	}
}
