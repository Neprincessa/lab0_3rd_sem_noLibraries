#include <iostream>
#include "Header.h"
#include "Templ.h"

using namespace std;

//extensions!!!!!!!!!! 
//library!!!!!

int main() {
	
	setlocale(LC_ALL, "rus");

	char s[256];
	char *p = s;

	//int wholeAmountOfElements = setAmount();

	int typeData;

	typeData = typeOfDataOfSeq();

	//array or list
	ArraySequence<int> myArr;
	/*cout << "Fill in ";
	cout << wholeAmountOfElements;
	cout << " elements to append" << endl;*/
	
	int number, element;
	int definiteFunc = -1;
	
	while (definiteFunc != 0) {
		definiteFunc = myArr.chooseFunction();
		
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
			
			myArr.Append(element);
			
			cout << "\n";
			break;
		}
		case 2: {
		
			cout << "Fill in the number that you whant to prepand:" << endl;
			cin >> s;
			while (!checkDataType(p)) // another check for double
				cin >> s;
			int a = atoi(s);
			
			myArr.Prepend(a);
		
			cout << "\n";
			break;
		}
		case 3: {
			
			cout << "The amount of elements is: ";
			
			cout << myArr.getLength() << endl;
			
			cout << "\n";
			break;
		}
		case 4: {
			myArr.GetFirst();
			cout << "\n";
			break;
		}
		case 5: {
			myArr.GetLast();
			cout << "\n";
			break;
		}
		case 6: {

			cout << "Fill in the number of element that you whant to get " << endl;
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			number = atoi(s);
			while (number<0 || number > myArr.getLength()) {
				cout << "Fill in the number from 1 to ";
				cout << myArr.getLength() << " ";
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				number = atoi(s);
			}
			
			myArr.Get(number);
			
			break;
		}
		case 7: {
			
			cout << "Is empty sequence?" << endl;
			
			if (myArr.getIsEmpty() == 0)
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
			int indexForInsert = atoi(s); //check diap

			cout << "Fill in the item" << endl;
			int item;
			cin >> item;
			
			myArr.InsertAt(indexForInsert, item);

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
			
			myArr.Remove(removeElement);
			
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

			while (start< 0 || start > myArr.getLength() - 1) {
				cout << "Fill in number from 1 to ";
				cout << myArr.getLength() << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				start = atoi(s) - 1;
			}

			if (start == myArr.getLength()-1)
				end = myArr.getLength()-1;
			else {
				
				cout << "Fill in the end index of new sequence" << endl;
				cin >> s;
				while (!checkDataType(p))
					cin >> s;
				end = atoi(s) - 1;
				while (end<start || end>myArr.getLength() - 1) {
					cout << "Fill in the number from ";
					cout << start + 1;
					cout << " to ";
					cout << myArr.getLength();
					cout << "\n";
					cin >> s;
					while (!checkDataType(p))
						cin >> s;
					end = atoi(s) - 1;
				}
			}
			
			myArr.GetSubSequence(start, end).Display();
			
			break;
		}
		case 20: {
			myArr.Display();
			cout << "\n";
			break;
		}
		default:
			break;
		}
	}

	//get sub sequence
	cout << "\n";
	
	//DIALOG witn user!!!!!! to add at the end or to the begining


	
	


	//fill in separate function


	

	

	system("pause");
	return 0;
}