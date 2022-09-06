//Header File for Class Bag (as a sample of an implementation of ADT
#ifndef _Bag
#define _Bag
#include<iostream>
using namespace std;

//Class Definition (Interface)
class Bag
{
private:
	int items[100];
	int itemCount;
public:
	Bag(); //This is a default constructor
	int getItemCount();
	bool isEmpty();
	void add(int item);
	void remove(int item);
	void display();
	void clear();
	bool contains(int item);
};
//Definition of Constructors
Bag::Bag()
{
	itemCount = 0;
}
//Definition of Methods (Member Functions)
int Bag::getItemCount()
{
	return itemCount;
}
bool Bag::isEmpty()
{
	return(itemCount == 0);
}
void Bag::add(int item)
{
	if (itemCount == 100)
		cout << "The bag is full!" << endl;
	else {
		items[itemCount] = item;
		itemCount++;
	}
}
void Bag::display()
{
	cout << "The bag contains following integers: " << endl;
	for (int i = 0; i < itemCount; i++)
		cout << items[i] << endl;
}
void Bag::clear()
{
	itemCount = 0;
}
bool Bag::contains(int item)
{
	for (int i = 0; i < itemCount; i++) {
		if (items[i] == item)
			return true;
	}
	return false;
}
void Bag::remove(int item)
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
		for (int i = 0; i < itemCount; i++) {
			if (items[i] == item) {
				index = i;
				break;
			}
		}
		//To remove the item, shift all the numbers on the right side of item to the left by one place
		for (int i = index; i < itemCount - 1; i++) {
			items[i] = items[i + 1];
		}
		itemCount--;
	}
}
#endif _Bag
