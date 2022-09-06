#include<iostream>
#include"Rectangle.h"
using namespace std;
int main()
{
	Rectangle myRec(5, 7), yourRec(4, 12), hisRec;
	if (myRec > yourRec) {
		cout << "myRec is greater." << endl;
	}
	else {
		cout << "yourRec is greater." << endl;
	}
	myRec.display();
	yourRec.display();
	system("pause");
	return 0;
}