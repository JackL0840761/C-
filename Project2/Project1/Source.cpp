#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle a(7, 11), b(10), c;
	c = a + b;
	cout << "the sum is" << c << endl;
	cout << "the rectangle a looks as" << a << endl;
	cout << a << endl;
	//get c length and width
	c.setLength(a.getLength() + b.getLength());
	c.setWidth(a.getWidth() + b.getWidth());
//
	
	system("pause");
	return 0;
}