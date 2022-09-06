//Now we are making a class template for ADT: Bag
#ifndef _Bag
#define _Bag
#include<iostream>
using namespace std;

//Class Definition (Interface)
template<class ItemType>
class Bag
{
private:
	ItemType items[100];
	int itemCount;
public:
	Bag(); //This is a default constructor
	int getItemCount();
	bool isEmpty();
	void add(ItemType item);
	void remove(ItemType item);
	void display();
	void clear();
	bool contains(ItemType item);
	bool getMax(ItemType &maxItem);

};
//Definition of Constructors
template<class ItemType>
Bag<ItemType>::Bag()
{
	itemCount = 0;
}
//Definition of Methods (Member Functions)
template<class ItemType>
int Bag<ItemType>::getItemCount()
{
	return itemCount;
}
template<class ItemType>
bool Bag<ItemType>::isEmpty()
{
	return (itemCount == 0);
}
template<class ItemType>
void Bag<ItemType>::add(ItemType item)
{
	if (itemCount == 100)
		cout << "The bag is full!" << endl;
	else {
		items[itemCount] = item;
		itemCount++;
	}
}
template<class ItemType>
void Bag<ItemType>::display()
{
	if (!isempty()) {
		cout << "The bag contains following items: " << endl;
		for (int i = 0; i < itemCount; i++)
			cout << items[i] << endl;
	}
	else
		cout << "Nothing is in the bag " << endl;
}
template<class ItemType>
void Bag<ItemType>::clear()
{
	itemCount = 0;
}
template<class ItemType>
bool Bag<ItemType>::contains(ItemType item)
{
	for (int i = 0; i < itemCount; i++) {
		if (items[i] == item)
			return true;
	}
	return false;
}
template<class ItemType>
void Bag<ItemType>::remove(ItemType item)
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
template<class ItemType>
bool Bag<ItemType>::getMax(ItemType& maxItem)
{
	if (itemCount == 0) {
		cout << "It is an emty bag" << endl;
		return false;
	}
	maxItem = items[0];
	for (int i = 1; i < itemCount; i++) {
		if (items[i] > maxItem)
			maxItem = items[i];
	}
	return true;
}
#endif _Bag


