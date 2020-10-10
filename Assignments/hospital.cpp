/*
   Write a program that computes and displays the charges for a patient’s hospital stay. First,
   the program should ask if the patient was admitted as an in-patient or an out-patient.
   Once the required data has been input and validated, the program should use two
   overloaded functions to calculate the total charges. One of the functions should accept
   arguments for the in-patient data, while the other function accepts arguments for out-
   patient data. Both functions should return the total charges.
*/

//Matthew Garcia
//assignment 6 - 7 
//CS216 

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

void in_patient();
void out_patient();
bool die(const string& msg);

int main()
{
	cout << "Was the patient an in-patient or was the patient an out-patient" << endl;

	string input;

	getline(cin, input);

	if(input == "in-patient")
	{
		in_patient(); 
	}

	else if(input == "out-patient")
	{
		out_patient();
	}

	else
	{
		die("input error");
	}
}

void in_patient()
{
	cout << "\nHow many days was spent in the hospital?" << endl;

	int days;

	cin >> days;

	cout << "\nWhat is the daily rate?" << endl;

	double rate;

	cin >> rate;

	cout << "\nWhat is the hospital charge for the services?" << endl;

	double service_charge;

	cin >> service_charge;

	cout << "\nWhat is the hospital medication charges?" << endl;

	double medication_charges;

	cin >> medication_charges;

	cout << fixed << showpoint << setprecision(2) << endl;

	double total = medication_charges + service_charge;

	double total_rate = rate * days;

	double total_in = total + total_rate;

	if(days < 0 || rate < 0 || medication_charges < 0 || service_charge < 0)
	{
		cout << "no negatives. Input again " << endl;

		in_patient();
	}

	else
	{
		cout << "Total: $" << total_in << endl;
	}
}

void out_patient()
{
	cout << "\nWhat are the charges for hospital services?" << endl;

	double hospital_services;

	cin >> hospital_services;

	cout << "\nWhat are the medication charges?" << endl;

	double medication_charge;

	cin >> medication_charge;

	cout << fixed << showpoint << setprecision(2) << endl;

	double total = hospital_services + medication_charge;

	if(hospital_services < 0 || medication_charge < 0)
	{
		cout << "No negatives " << endl;

		out_patient();
	}

	else 
	{
		cout << "\nTotal: $" << total << endl;
	}
}

bool die(const string& msg)
{
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);
}
