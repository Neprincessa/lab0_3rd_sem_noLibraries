#include <iostream>
#include "Header.h"
#include "Templ.h"

using namespace std;

int main() {
	
	setlocale(LC_ALL, "rus");

	char s[256];
	char *p = s;

	int wholeAmountOfElements = setAmount();

	ArraySequence<int> myArr(wholeAmountOfElements);
	cout << "Fill in ";
	cout << myArr.getLength();
	cout << " elements" << endl;
	
	int number;

	//choose how to add the element
	for (int i = 0; i < myArr.getLength(); i++) {
		cout << i + 1 << ") ";
		cin >> number;
		myArr.Append(number, i);
	}
	

	//get sub sequence
	cout << "\n";
	int start, end;
	cout << "Fill in the start index of new sequence" << endl;
	cin >> s;
	while (!checkDataType(p))
		cin >> s;
	start = atoi(s) - 1;

	while (start< 0 || start > myArr.getLength()) {
		cout << "Fill in number from 1 to ";
		cout << myArr.getLength()<<endl;
		cin >> s;
		while (!checkDataType(p))
			cin >> s;
		start = atoi(s) - 1;
	}


	cout << "Fill in the end index of new sequence" << endl;
	cin >> s;
	while (!checkDataType(p))
		cin >> s;
	end = atoi(s) - 1;
	while (end<start || end>myArr.getLength()) {
		cout << "Fill in the number from ";
		cout << start+1;
		cout << " to ";
		cout << myArr.getLength();
		cout << "\n";
		cin >> s;
		while (!checkDataType(p))
			cin >> s;
		end = atoi(s) - 1;
	}

	myArr.GetSubSequence(start, end).Display();
	//dialog witn user!!!!!! to add at the end or to the begining
	
	system("pause");
	return 0;
}