/*CS216 program 1
 * Matthew Garcia
 * 9/8/20
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter your pay rate\n";
	double pay_rate;
	cin >> pay_rate;

	cout << "Enter the number of hours you've worked each week\n";
	int hours;
	cin >> hours;

	double total = pay_rate * hours;
	double tax = total * .14;
	double new_total = total - tax;
	double utilities_tax = new_total * .1;
	double utilities = new_total - utilities_tax;
	double supplies_tax = utilities *.01;
	double supplies = utilities - supplies_tax;
	double bonds = supplies * .25;
	int bonds_spent = supplies - bonds;
	int help_amount = bonds * .5; 

	cout << "\nIncome before taxes: $ " << total << "\nIncome after taxes: $ " << new_total;
	cout << "\nIncome after spending on cloths and other accessories: $ " << utilities;
	cout << "\nIncome after spending on school supplies: $ " << supplies;
	cout << "\nIncome after spending on savings bonds: $ " << bonds;
	cout << "\nParents help towards savings bonds: $ " << help_amount << "\n";
}
