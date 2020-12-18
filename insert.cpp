#include <iostream>
#include <iomanip>

using namespace std;

class LinkedList
{
protected:
	struct ListNode
	{
		double value;
		ListNode* next;

		ListNode(double value1, ListNode* next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};

	ListNode* head;
public:
	LinkedList()
	{
		head = NULL;
	}

	~LinkedList();

	void add(double x);

	void remove(double x);

	bool isMember(double x);

	int search(double x);

	void insert(double x, int position);

	void print();

	LinkedList(const LinkedList& original);

private:

	static ListNode* copyList(ListNode* aList);
};

LinkedList::~LinkedList()
{
	ListNode* aptr = head;

	while (aptr != NULL)
	{
		ListNode* trash = aptr;
		aptr = aptr->next;
		delete trash;
	}
}

void LinkedList::add(double x)
{
	if (head == NULL)
	{
		head = new ListNode(x);
	}

	else
	{
		head = new ListNode(x, head);
	}
}

void LinkedList::remove(double x)
{
	ListNode* aptr, * prev;

	if (head == NULL)
	{
		return;
	}

	if (head->value == x)
	{
		aptr = head;
		head = head->next;
		delete aptr;
	}

	else
	{
		aptr = head;

		while (aptr != NULL && aptr->value != x)
		{
			prev = aptr;
			aptr = aptr->next;
		}

		if (aptr)
		{
			prev = head;
			prev->next = aptr->next;
			delete aptr;
		}
	}
}

bool LinkedList::isMember(double x)
{
	if (head == NULL)
	{
		return false;
	}

	else
	{
		ListNode* aptr = head;

		while (aptr != NULL)
		{
			if (aptr->value == x)
				return true;
			aptr = aptr->next;
		}

		return false;
	}
}

int LinkedList::search(double x)
{
	if (head == NULL)
	{
		return -1;
	}

	else
	{
		int count = 0;

		ListNode* aptr = head;

		while (aptr != NULL)
		{
			if (aptr->value == x)
				return count;
			aptr = aptr->next;
			count++;
		}

		return -1;
	}

}

void LinkedList::insert(double x, int position)
{
	ListNode* aptr, * prev;

	int count = 0;

	if (head == NULL)
	{
		head = new ListNode(x);
	}

	else
	{
		aptr = head;

		while (aptr != NULL && count != position)
		{
			prev = aptr;
			aptr = aptr->next;
			count++;
		}
		prev = head;
		prev->next = new ListNode(x, aptr);
	}
}

void LinkedList::print()
{
	ListNode* aptr = head;

	while (aptr != NULL)
	{
		cout << aptr->value << " ";
		aptr = aptr->next;
	}

	cout << endl;
}

LinkedList::LinkedList(const LinkedList& original)
{
	head = copyList(original.head);
}

LinkedList::ListNode* LinkedList::copyList(ListNode* aList)
{
	if (aList == NULL)
	{
		return NULL;
	}

	else
	{
		ListNode* tailCopy = copyList(aList->next);

		return new ListNode(aList->value, tailCopy);
	}
}

int main()
{
	LinkedList list;

	for (int i = 1; i <= 11; i++)
	{
		list.add(i * 3.14);
	}

	cout << "These are the values of the list:\n";
	list.print();

	list.insert(1660.2, 3);
	list.insert(2060.1, 1);
	list.insert(1050.3, 2);
	list.insert(670.4, 5);

	cout << "\nThese are the values of the list:\n";
	list.print();


	system("Pause");
}
