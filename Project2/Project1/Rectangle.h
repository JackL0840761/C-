//Header File of class Rectangle

#ifndef _Rectangle
#define _Rectangle
#include<iostream>
#include<fstream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	//Default constructor:
	Rectangle();
	//Non-default constructor:
	Rectangle(double l, double w);
	Rectangle(double l);
	void setLength(double l);
	double getLength();
	void setWidth(double w);
	double getWidth();
	double area();
	void display();
	bool operator>(Rectangle r);
	bool operator<(Rectangle r);
	Rectangle operator+(Rectangle r);

};
//Definitions of constructors;
Rectangle::Rectangle()
{
	length = 1;
	width = 1;
}
Rectangle::Rectangle(double L)
{
	length = L;
	width = 1;
}
Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
}
//Definition of Methods:
void Rectangle::setLength(double l)
{
	length = l;
}
double Rectangle::getLength()
{
	return length;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::area()
{
	return length * width;
}
void Rectangle::display()
{
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 or i == length - 1 or j == 0 or j == width - 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}
bool Rectangle::operator>(Rectangle r)
{
	return(this->area() > r.area());
}
bool Rectangle::operator<(Rectangle r)
{
	return(this->area() < r.area());
}
	Rectangle Rectangle::operator+(Rectangle r)
	{
		Rectangle s;
		s.setLength(this->getLength() + r.getLength());
		s.setWidth(this->getWidth() + r.getWidth());
		returns s;
	}
	//overload
	ostream &operator<<(ostream rOut, Rectangle r)
	{
		for (int i = 0; i < r.getLength(); i++) {
			for (int j = 0; j < r.getWidth(); j++) {
				if (i == 0 or i == r.getLength - 1 or j == 0 or j == r.getWidth - 1)
					rOut << "* ";
				else
					rOut << "  ";
			}
			rOut << endl;
		}
		return rOut;
	}
#endif
