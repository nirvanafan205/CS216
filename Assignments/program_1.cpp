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

using namespace std;

void in_patient(int days_spent, double daily_rate, double medication_charges);
void out_patient(double hospital_services, double medication_charges);

int main()
{
	cout << "Was the patient an in-patient or was the patient an out-patient" << endl;

	string patient;

	cin >> patient;
}

void in_patient(int days_spent, double daily_rate, double medication_charges)
{

}

void out_patient(double hospital_services, double medication_charges)
{

}
