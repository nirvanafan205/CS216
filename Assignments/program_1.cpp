/*
 Write a program that computes and displays the charges for a patient’s hospital stay. First,
the program should ask if the patient was admitted as an in-patient or an out-patient.
Once the required data has been input and validated, the program should use two
overloaded functions to calculate the total charges. One of the functions should accept
arguments for the in-patient data, while the other function accepts arguments for out-
patient data. Both functions should return the total charges.
*/

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <cstdlib>

using namespace std;

void in_patient(int days_spent, double daily_rate, double medication_charges);
void out_patient(double hospital_services, double medication_charges);

int main()
{
	cout << "Was the patient an in-patient or was the patient an out-patient" << endl;
}

void in_patient(int days_spent, double daily_rate, double medication_charges)
{
	cout << "How many days was spent in the hospital?" << endl;

	int days;

	cin >> days;

	cout << "What is the daily rate?" << endl;

	double rate;

	cin >> rate;

	cout << "What is the hospital charge for the services?" << endl;

	double service_charge;

	cin >> service_charge;

	cout << "What is the hospital medication charges?" << endl;

	double medication_charges;

	cin >> medication_charges;
}

void out_patient(double hospital_services, double medication_charges)
{
	cout << "What are the charges for hospital services?" << endl;

	double hospital_services;

	cin >> hospital_services;

	cou << "What are the medication charges?" << endl;

	double medication_charge;
	
	cint >> medication_charge;
}
