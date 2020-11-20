/* 
   A sequence of integers such as 1, 4, 5, 7
   can be represented by a function that takes
   a nonnegative int as parameter and returns
   the corresponding term of the sequence
*/

#include <iostream>

using namespace std;

class AbstractSeq
{

	public:
		virtual int fun(int k) = 0;
		void printSeq(int k, int m);
		int sumSeq(int k, int m);
};

class OddSequence : public AbstractSeq
{
	public:
		virtual int fun(int k);
};

class EvenSequence : public AbstractSeq
{
	public: 
		virtual int fun(int k);

};

int main()
{
	int start, end;

	cout << "Enter a start and end number" << endl;

	cin >> start;
	cin >> end;

	OddSequence *odd;
	EvenSequence *even;

	odd = new OddSequence();
	even = new EvenSequence();

	cout << "\nEven" << endl;
	cout << "Start: " << start * 2 << endl;
	cout << "End: " << end * 2 << endl;
	cout << "Sequence: ";

	even->printSeq(start, end);

	cout << "\nSum of numbers: " << even->sumSeq(start, end) << endl;

	cout << "\nOdd" << endl;
	cout << "Start: " << (start * 2) + 1 << endl;
	cout << "End: " << (end * 2) + 1 << endl;
	cout << "Sequence: ";

	odd->printSeq(start, end);

	cout << "\nSum of numbers: " << odd->sumSeq(start, end) << endl;
}

void AbstractSeq::printSeq(int k, int m)
{
	while(k <= m)
	{
		cout << fun(k) << " ";
			k++;
	}
}

int AbstractSeq::sumSeq(int k, int m)
{
	int sum = 0; 

	while(k <= m)
	{
		sum = sum + fun(k);
		k++;
	}

	return sum;
}

int OddSequence::fun(int k)
{
	return (2 * k + 1);
}

int EvenSequence::fun(int k)
{
	return (2 * k);
}
