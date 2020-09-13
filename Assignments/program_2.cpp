#include <iostream>
#include <fstream>

using namespace std;

bool die(const string & msg);

int main()
{
	ifstream readFile;
	ofstream writeFile;

	string lastName, firstName;

	readFile.open("employeeInput.txt");
	writeFile.open("employeeOutput.txt");
	writeFile << "Writing ... \n";

	if(!readFile)
	{
		die("File does not exist\n");
	}

	else
	{
		while(readFile >> input)
		{
			cout << input << "\n";
			writeFile << input << "\n";
		}
	}
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}
