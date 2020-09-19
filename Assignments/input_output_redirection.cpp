/*
Three employees in a company are up for a special pay increase. You are a given a file, say employeeSalary.txt, with the following data:

Miller Andrew  65787.87   5

Green Sheila   75892.56   6

Sethi  Amit      74900.50   6.1

Each input line consists of an employees's last name, first name, current salary, and percent pay increase.
For example, in the first input line, the last name of the employee is Miller, and first name is Andrew, the current salary is 65789.87, and the pay increase is 5%
Write a program that reads data from the specified file and stores the output in the file employeeOutput.txt. For each employee, the data must be output in the following form:
firstName  lastName  updatedSalar. Format the output of decimal numbers to two decimal places. Also, print the updated total salary of these three employees.
*/

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
			readFile >> lastName;
			readFile >> firstName;
			readFile >> salary;
			readFile >> raise;

			raise /= 100;

			salary = (raise * salary) + salary;

			if(!readFile)
			{
				break;
			}

			writeFile << firstName << " " << lastName << "	" << salary << "\n";
		}

		cout << "File has been written" << endl;
	}
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}
