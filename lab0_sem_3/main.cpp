#include <iostream>
#include "Header.h"
#include "Templ.h"

using namespace std;

int main() {
	
	setlocale(LC_ALL, "rus");

	char s[256];
	char *p = s;

	int wholeAmountOfElements = setAmount();

	ArraySequence<int> myArr;
	cout << "Fill in ";
	cout << wholeAmountOfElements;
	cout << " elements" << endl;
	
	int number;

	//choose how to add the element
	for (int i = 0; i < wholeAmountOfElements; i++) {
		cout << i + 1 << ") ";
		cin >> number;
		myArr.Append(number);
	}


	//get sub sequence
	cout << "\n";
	int start, end;
	cout << "Fill in the start index of new sequence" << endl;
	cin >> s;
	while (!checkDataType(p))
		cin >> s;
	start = atoi(s) - 1;

	while (start< 0 || start > myArr.getLength()-1) {
		cout << "Fill in number from 1 to ";
		cout << myArr.getLength()<<endl;
		cin >> s;
		while (!checkDataType(p))
			cin >> s;
		start = atoi(s) - 1;
	}


	cout << "Fill in the end index of new sequence" << endl; //if the getLEngth = start index -> change a little bit
	cin >> s;
	while (!checkDataType(p))
		cin >> s;
	end = atoi(s) - 1;
	while (end<start || end>myArr.getLength()-1) {
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
	//DIALOG witn user!!!!!! to add at the end or to the begining

	myArr.GetFirst();

	myArr.GetLast();
	cout << "\n";

	cout << "\n";
	cout << "Fill in the number of element that you whant to get " << endl;
	cin >> s;
	while (!checkDataType(p))
		cin >> s;
	number = atoi(s);
	while (number<0 || number > myArr.getLength()) {
		cout << "Fill in the number from 1 to ";
		cout << myArr.getLength()<<" ";
		cin >> s;
		while (!checkDataType(p))
			cin >> s;
		number = atoi(s);
	}
	myArr.Get(number);
	
	cout << "Is empty sequence?" << endl;
	if (myArr.getIsEmpty() == 0)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

	//fill in separate function
	cout << "Fill in the number that you whant to prepand:" << endl;
	cin >> s;
	while (!checkDataType(p)) // another check for double
		cin >> s;
	int a = atoi(s);
	myArr.Prepend(a);
	myArr.Display();
	cout << "\n";
	cout << "Insert element at number: " << endl;
	cin >> s;
	while (!checkDataType(p))
		cin >> s;
	int indexForInsert = atoi(s); //check diap

	cout << "Fill in the item" << endl;
	int item;
	cin >> item;
	myArr.InsertAt(indexForInsert, item);
	myArr.Display();

	cout << "Fill in the number to remove" << endl;
	int ggg;
	myArr.Remove(5);
	myArr.Display();
	system("pause");
	return 0;
}