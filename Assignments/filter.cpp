/* Matthew Garcia
 * CS216
  asks user for two file names
  first file is for input, second is output
  all of first file will be put into second
  all content will be read from first 
  then input into second with all chars being lowered
  only capitals after periods
*/

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
		cout << "the input file was not found." << endl;
	}

	outPutFile.open(output_name);

	if(!outPutFile)
	{
		cout << "the input file was not found." << endl;
	}

	char ch;
	char check;
	char temp;
	int count = 0;

	while(inOutFile)
	{
		inOutFile.get(ch);

		if(ch != ' ' && ch != 10)
		{
			check = ch;
		}

		if((ch > 64 && ch < 91) && count != 0)
		{
			ch += 32;
		}

		count ++;

		if(temp == 46 && (ch > 64 && check < 91) )
		{
			ch -= 32;
		}

		outPutFile.put(ch);

		temp = check;
	}
}
