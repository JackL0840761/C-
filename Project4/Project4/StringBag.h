//Header File for Class Bag (as a sample of an implementation of ADT
#ifndef _StringBag
#define _StringBag
#include<iostream>
#include<string>
using namespace std;

//Class Definition (Interface)
class StringBag
{
private:
	string bagStorage[100];
	int size;
public:
	StringBag(); //This is a default constructor
	int getItemCount();
	bool isEmpty();
	void add(string item);
	void remove(string item);
	void display();
	void clear();
	bool contains(string item);
};
//Definition of Constructors
StringBag::StringBag()
{
	Item Count = 0;
}
//Definition of Methods (Member Functions)
int StringBag::string item()
{
	return itemCount;
}
bool StringBag::isEmpty()
{
	if (size == 0)
		return true;
	else
		return false;
}
void StringBag::add(string item)
{
	if (size == 100)
		cout << "The bag is full!" << endl;
	else {
		bagStorage[size] = item;
		size++;
	}
}
void StringBag::display()
{
	cout << "The bag contains following: " << endl;
	for (int i = 0; i < size; i++)
		cout << bagStorage[i] << endl;
}
void StringBag::clear()
{
	size = 0;
}
bool StringBag::contains(string item)
{
	for (int i = 0; i < size; i++) {
		if (bagStorage[i] == item)
			return true;
	}
	return false;
}
void StringBag::remove(string item)
{
	if (isEmpty()) {
		cout << "Removal is failed! The bag is empty!" << endl;
	}
	else if (!contains(item)) {
		cout << "Removal is failed! The item is not in the bag." << endl;
	}
	else {
		//First, find the index of the item
		int index = 0;
		for (int i = 0; i < size; i++) {
			if (bagStorage[i] == item) {
				index = i;
				break;
			}
		}
		//To remove the item, shift all the numbers on the right side of item to the left by one place
		for (int i = index; i < size - 1; i++) {
			bagStorage[i] = bagStorage[i + 1];
		}
		size--;
	}
}
#endif _StringBag

