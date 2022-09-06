#include<iostream>
#include"Bag.h"
#include<string>
using namespace std;
//create a class Bag for holding strings
int main()
{
	Bag<string> myBag;
	Bag<int> yourBag;
	string a;
	cout << "Enter 5 strings:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		myBag.add(a);
	}
	myBag.display();
	system("pause");
	return 0;
}