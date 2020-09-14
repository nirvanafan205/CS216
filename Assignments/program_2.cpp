#include <iostream>
#include <fstream>

using namespace std;

bool die(const string & msg);

int main()
{
	ifstream readFile;
	ofstream writeFile;

	string lastName, firstName;
	double salary, raise;

	readFile.open("employeeInput.txt");
	writeFile.open("employeeOutput.txt");

	if(!readFile)
	{
		die("File does not exist\n");
	}

	else
	{
		while(readFile)
		{
			if(!readFile)
			{
				break;
			}

			readFile >> lastName;
			readFile >> firstName;
			readFile >> salary;
			readFile >> raise;
			raise /= 100;

			salary = (raise * salary) + salary;

			writeFile << firstName << " " << lastName << "	" << salary << "\n";
		}
	}
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}
