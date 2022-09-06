#include<iostream>
using namespace std;
class Rectangle
{
private:
	double Length;
	double Width;
public:
	Rectangle();//default constructor
	Rectangle(double l, double w);//non-default constructor
	void setLength(double l);
	void setWidth(double w);
	double getLength();
	double getWidth();
	double area();
	void display();
	bool operator>(Rectangle r);
};
//Implementaion
void Rectangle::setLength(double l)
{
	Length = l;
}
void Rectangle::setWidth(double w)
{
	Width = w;
}
double Rectangle::getLength()
{
	return Length;
}
double Rectangle::getWidth()
{
	return Width;
}
double Rectangle::area()
{
	return Length * Width;
}
void Rectangle::display()
{
	for (int i = 0; i < Length; i++) {
		for (int j = 0; j < Width; j++)
			if (i == 0 or i == Length - 1 or j == 0 or j == Width - 1)
				cout << "* ";
			else
				cout << " ";
			
	}
	cout << endl;
}
Rectangle::Rectangle(double l, double w)
{
	Length = l;
	Width = w;
}
Rectangle::Rectangle()
{
	Length = 0;
	Width = 0;
}
bool Rectangle::operator>(Rectangle r)
{
	if (this->area() > r.area())
		return true;
	else
		return false;
}