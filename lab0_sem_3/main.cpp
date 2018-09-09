#include <iostream>
#include "Header.h"
#include "Templ.h"

using namespace std;

int main() {
	
	setlocale(LC_ALL, "rus");

//	int wholeAmountOfElements = setAmount();

	ArraySequence<int> myArr;
	//myArr.SetSequence(wholeAmountOfElements); //add amount field
	cout << "Fill in ";
	cout << myArr.getLength();
	cout << " elements" << endl;
	
	int number;

	for (int i = 0; i < myArr.getLength(); i++) {
		cout << i + 1 << ") ";
		cin >> number;
		myArr.Append(number, i);
	}
	
	//myArr.GetSubSequence(0, myArr.getLength());
	//dialog witn user!!!!!! to add at the end or to the begining
	
	system("pause");
	return 0;
}