#include <iostream>
#include "Header.h"
#include "templ.h"

void IntListSeq() {
	
	char s[256];
	char *p = s;

	ListSequence<int> myList;

	int number, element;
	int definiteFunc = -1;

	while (definiteFunc != 0) {

		definiteFunc = myList.chooseFunction();

		switch (definiteFunc)
		{
		case 0: {
			break;
		}
		case 1: {

			cout << "Fill in the number that you whant to append:" << endl;
			cin >> s;
			//only for int!!!!!
			while (!checkDataType(p))
				cin >> s;
			element = atoi(s);

			myList.Append(element);

			cout << "\n";
			break;
		}
		case 2: {

			cout << "Fill in the number that you whant to prepand:" << endl;
			cin >> s;
			while (!checkDataType(p)) // another check for double
				cin >> s;
			int a = atoi(s);

			myList.Prepend(a);

			cout << "\n";
			break;
		}
		case 3: {

			cout << "The amount of elements is: ";

			cout << myList.getLength() << endl;

			cout << "\n";
			break;
		}
		case 4: {
			myList.GetFirst();
			cout << "\n";
			break;
		}
		case 5: {
			myList.GetLast();
			cout << "\n";
			break;
		}
		case 6: {

			cout << "Fill in the number of element that you whant to get " << endl;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			number = atoi(s);
			while (number<0 || number > myList.getLength()) {
				cout << "Fill in the number from 1 to ";
				cout << myList.getLength() << " ";
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				number = atoi(s);
			}

			myList.Get(number);

			break;
		}
		case 7: {

			cout << "Is empty sequence?" << endl;

			if (myList.getIsEmpty() == 0)
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
			cout << "\n";
			break;
		}
		case 8: {

			cout << "Insert element at number: " << endl;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			int indexForInsert = atoi(s);
			while (indexForInsert < 0 || indexForInsert>myList.getLength()) {
				cout << "Fill in the number from 1 to ";
				cout << myList.getLength() << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				indexForInsert = atoi(s);
			}

			cout << "Fill in the item" << endl;
			int item;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			item = atoi(s);

			myList.InsertAt(indexForInsert, item);

			cout << "\n";
			break;
		}
		case 9: {

			cout << "Fill in the number to remove" << endl;
			int removeElement;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			removeElement = atoi(s);

			myList.Remove(removeElement);

			cout << "\n";
			break;
		}
		case 10: {

			int start, end;

			cout << "Fill in the start index of new sequence" << endl;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			start = atoi(s) - 1;

			while (start< 0 || start > myList.getLength() - 1) {
				cout << "Fill in number from 1 to ";
				cout << myList.getLength() << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				start = atoi(s) - 1;
			}

			if (start == myList.getLength() - 1)
				end = myList.getLength() - 1;
			else {

				cout << "Fill in the end index of new sequence" << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				end = atoi(s) - 1;
				while (end<start || end>myList.getLength() - 1) {
					cout << "Fill in the number from ";
					cout << start + 1;
					cout << " to ";
					cout << myList.getLength();
					cout << "\n";
					cin >> s;
					while (!checkDataType(p))
						cin >> s;
					end = atoi(s) - 1;
				}
			}

			myList.GetSubSequence(start, end).Display();

			break;
		}
		case 20: {
			myList.Display();
			cout << "\n";
			break;
		}
		default:
			break;
		}
	}
}


void DoubleListSeq() {

	char s[256];
	char *p = s;

	ListSequence<double> myList;

	double element;
	int definiteFunc = -1;

	while (definiteFunc != 0) {

		definiteFunc = myList.chooseFunction();

		switch (definiteFunc)
		{
		case 0: {
			break;
		}
		case 1: {

			cout << "Fill in the number that you whant to append:" << endl;
			//cin >> s;
			////only for int!!!!!
			//while (!checkDataType(p))
			//	cin >> s;
			//element = atoi(s);
			cin >> element;
			myList.Append(element);

			cout << "\n";
			break;
		}
		case 2: {

			cout << "Fill in the number that you whant to prepand:" << endl;
			//cin >> s;
			//while (!checkDataType(p)) // another check for double
			//	cin >> s;
			//int a = atoi(s);
			double a;
			cin >> a;

			myList.Prepend(a);

			cout << "\n";
			break;
		}
		case 3: {

			cout << "The amount of elements is: ";

			cout << myList.getLength() << endl;

			cout << "\n";
			break;
		}
		case 4: {
			myList.GetFirst();
			cout << "\n";
			break;
		}
		case 5: {
			myList.GetLast();
			cout << "\n";
			break;
		}
		case 6: {
			int ind;
			cout << "Fill in the number of element that you whant to get " << endl;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			ind = atoi(s);
			while (ind<0 || ind > myList.getLength()) {
				cout << "Fill in the number from 1 to ";
				cout << myList.getLength() << " ";
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				ind = atoi(s);
			}

			myList.Get(ind);

			break;
		}
		case 7: {

			cout << "Is empty sequence?" << endl;

			if (myList.getIsEmpty() == 0)
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
			cout << "\n";
			break;
		}
		case 8: {

			cout << "Insert element at number: " << endl;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			int indexForInsert = atoi(s);
			while (indexForInsert < 0 || indexForInsert>myList.getLength()) {
				cout << "Fill in the number from 1 to ";
				cout << myList.getLength() << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
			}

			cout << "Fill in the item" << endl;
			double item;
			cin >> item;

			myList.InsertAt(indexForInsert, item);

			cout << "\n";
			break;
		}
		case 9: {

			cout << "Fill in the number to remove" << endl;
			double removeElement;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			removeElement = atoi(s);

			myList.Remove(removeElement);

			cout << "\n";
			break;
		}
		case 10: {

			int start, end;

			cout << "Fill in the start index of new sequence" << endl;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			start = atoi(s) - 1;

			while (start< 0 || start > myList.getLength() - 1) {
				cout << "Fill in number from 1 to ";
				cout << myList.getLength() << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				start = atoi(s) - 1;
			}

			if (start == myList.getLength() - 1)
				end = myList.getLength() - 1;
			else {

				cout << "Fill in the end index of new sequence" << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				end = atoi(s) - 1;
				while (end<start || end>myList.getLength() - 1) {
					cout << "Fill in the number from ";
					cout << start + 1;
					cout << " to ";
					cout << myList.getLength();
					cout << "\n";
					cin >> s;
					while (!checkDataType(p))
						cin >> s;
					end = atoi(s) - 1;
				}
			}

			myList.GetSubSequence(start, end).Display();

			break;
		}
		case 20: {
			myList.Display();
			cout << "\n";
			break;
		}
		default:
			break;
		}
	}

}