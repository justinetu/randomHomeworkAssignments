#include<iostream>

using namespace std;

class NegSize {};

const int defMaxListSize = 10; // Default maximum list size

template <class DataType>

class List

{
private:

	// Data members

	int maxSize,

		size, // Actual number of data item in the list

		cursor; // Cursor array index

	DataType* dataItems; // Array containing the list data item

public:

	// Constructor

	List<DataType>()//default constructor (implement)

	{

		maxSize = defMaxListSize;

		size = 0;

		cursor = 0;

	}

	List<DataType>(int maxNumber)// parameterized constructor (implement)

	{

		if (maxNumber < 0)

			throw NegSize();

		maxSize = maxNumber;

		size = 0;

		cursor = 0;

		dataItems = new DataType[maxSize];

	}

	~List<DataType>() {

		delete[]dataItems; // Destructor (implement)

	}

	// List manipulation operations

	void insert(const DataType& newDataItem) { // Insert after cursor
		if (cursor < size) {
			++cursor;
			dataItems[cursor] = newDataItem;
		}
	}
	void remove(const DataType& oldDataItem) { // Remove data item
		for (int i = 0; i < size; i++) {
			if (i != size - 1) {
				if (oldDataItem == dataItems[i]) {
					dataItems[i] = dataItems[i + 1];
					while (i < size) {
						dataItems[i] = dataItems[i + 1];
						++i;
						if (i == size - 1) {
							--size;
							break;
						}
					}
				}
				if (oldDataItem == dataItems[size - 1]) {
					--size;
				}
			}
		}
	}
	void replace(const DataType& newDataItem) { // Replace data item
		dataItems[cursor] = newDataItem;
	}
	void clear()// Clear list (implement)

	{

		size = 0;

		cursor = 0;

	}

	// List status operations

	bool isEmpty() const { // List is empty
		if (size == 0)
			return true;
		return false;
	}

	bool isFull() const { // List is full
		if (size == maxSize)
			return true;
		return false;
	}

	// List iteration operations

	void gotoBeginning() // Points to the first element of the list

	{
		cursor = 0;
	}

	int getSize() { return size; }

	DataType getNextItem() //returns next item in sorted list (implement){

	{

		cursor++;

		return dataItems[cursor];

	}

	void insertItem(DataType& Item)// Inserts an element Item into the sorted list(implement)

	{

		bool moreToSearch = (cursor < size);

		bool found = false;

		cursor = 0;

		while (moreToSearch == true && found == false)

		{

			if (Item > dataItems[cursor])

			{

				cursor++;

				moreToSearch = (cursor < size);

			}

			else found = true;

		}

		if (found == false) {

			dataItems[cursor] = Item;

			size++;

		}

		else {

			int pt = size + 1;

			while (pt > cursor)

			{

				dataItems[pt] = dataItems[pt - 1];

				pt--;

			}

			dataItems[cursor] = Item;

			size++;

		}

	}

	void showStructure() const // Output the list structure --(implement )

	{

		int pt = 0;

		while (pt < size) {

			cout << dataItems[pt];

			pt++;

		}

	}


};
