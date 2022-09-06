#include<iostream>
#include"Bag.h"
#include"Rectangle.h"
using namespace std;

int main()
{
	Bag<int> myBag;
	Bag<Rectangle> rBag;
	Rectangle r[5] = { Rectangle(5,7),Rectangle(3,4),Rectangle(5,11) ,Rectangle(10,7),Rectangle(5,4); }
	for (int i = 0; i < 5; i++) {
		rBag.add(r[i]);
	}

	rBag.display();
	Rectangle a;
	if (rBag.getMax(a)) {
		cout << "The largest rectangle is " << endl;
		cout << a << endl;
	}
	else << "Nothing is in the bag " << endl;

	system("pause");
	return 0;
}

