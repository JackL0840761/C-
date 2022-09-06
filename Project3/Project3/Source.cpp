#include<iostream>
#include"Bag.h"
using namespace std;

int main()
{
	Bag myBag, yourBag;
	int a;
	for (int i = 0; i < 10; i++) {
		myBag.add(rand() % 100);
	}
	myBag.display();
	cout << "Please enter a integer:" << endl;
	cin >> a;
	if (myBag.contains(a)) {
		cout << "yes,this interget is in the bag" << endl;
	}
	else {
		cout << "no,the integer is not in the bag" << endl;
	}
	system("pause");
	return 0;
}