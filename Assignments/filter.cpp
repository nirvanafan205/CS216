#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream inOutFile;
	ofstream outPutFile;
	string input_name;
	string output_name;
	string word;

	cout << "Enter your file name that will be used for input and output" << endl;

	cin >> input_name;
	cin >> output_name;

	inOutFile.open(input_name);
	if(!inOutFile)
	{
		cout << "The input file was not found." << endl;
	}

	getline(inOutFile, word);

	while(inOutFile)
	{

	}
}
