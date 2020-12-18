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

	LinkedList(const LinkedList& original);

	~LinkedList();

	void add(double x);

	void remove(double x);

	void remove(int position);

	bool isMember(double x);

	int search(double x);

	void insert(double x, int position);

	void print();

private:

	static ListNode* copyList(ListNode* aList);
};

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

LinkedList::~LinkedList()
{
	ListNode* aptr = head;

	while (aptr != NULL)
	{
		ListNode* extra = aptr;
		aptr = aptr->next;
		delete extra;
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
	ListNode* new_, * old;

	if (head == NULL)
	{
		return;
	}

	else
	{
		new_ = head;
		while (new_ != NULL && new_->value != x)
		{
			old = new_;
			new_ = new_->next;
		}
		
		if(new_)
		{
			old = head;
			old->next = new_->next;
			delete new_;
		}
	}
}

void LinkedList::remove(int position)
{
	if (head == NULL)
	{
		return;
	}

	else if (position == 0)
	{
		head = head->next;
	}

	else
	{
		int count = 0;

		ListNode* new_ = head, * old;

		while (new_ != NULL && count != position)
		{
			old = new_;
			new_ = new_->next;
			count++;
		}

		if(new_)
		{
			old = head;
			old->next = new_->next;
			delete new_;
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
	ListNode* new_, * old;

	if (head == NULL)
	{
		head = new ListNode(x);
	}

	else
	{
		new_ = head;

		int count = 0;

		while (new_ != NULL && count != position)
		{
			old = new_;
			new_ = new_->next;
			count++;
		}
		old = head;
		old->next = new ListNode(x, new_);
	}
}

void LinkedList::print()
{
	if (head == NULL)
	{
		return;
	}

	else
	{
		ListNode* aptr = head;

		cout << fixed << showpoint << setprecision(1);

		while (aptr != NULL)
		{
			cout << aptr->value << "  ";

			aptr = aptr->next;
		}

		cout << endl;
	}
}

int main()
{
	LinkedList list;

	for (int i = 1; i <= 11; i++)
	{
		list.add(i * 3.5);
	}

	cout << "These are the value in the list:" << endl;
	list.print();

	cout << "\nRemoving the value at position: 0" << endl;
	list.remove(0);

	cout << "\nThese are the value in the list:" << endl;
	list.print();

	cout << "\nRemoving the value at position: 5" << endl;
	list.remove(5);

	cout << "\nThese are the value in the list:" << endl;
	list.print();

	cout << "\nRemoving the value at position: 28" << endl;
	list.remove(28);

	cout << "\nThese are the value in the list:" << endl;
	list.print();

	system("Pause");
}
