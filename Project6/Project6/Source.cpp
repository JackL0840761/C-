#include<iostream>
#include"Stack.h"
using namespace std;
int main()
{
	//write a  program that ask a user to enter an interger
	//and display yes if the number is symetric otherwise display no
	//the number1235321 or 12344321
	Stack<int> myStack;
	for (int k = 5; k < 15; k++) {
		myStack.push(k);
	}
	myStack.display();
	cout << "the item on the top of the stack is" << myStack.peek() << endl;
	myStack.pop();
	myStack.display();
	myStack.clean();
	myStack.display();
	system("pause");
	return 0;
}