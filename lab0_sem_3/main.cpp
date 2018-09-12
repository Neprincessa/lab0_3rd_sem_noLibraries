#include <iostream>
#include "Header.h"
#include "templ.h"


using namespace std;

//extensions!!!!!!!!!! 
//library!!!!!

int main() {
	
	setlocale(LC_ALL, "rus");

	char s[256];
	char *p = s;

	//int wholeAmountOfElements = setAmount();

	int typeData;

	

	int curSeq = typeOfSequence();
	typeData = typeOfDataOfSeq();

	if (curSeq == 1) {
		if (typeData == 1)
			IntArrSeq();
		if (typeData == 2)
			DoubleArrSeq();
	}
	if (curSeq == 2) {
		ListSequence<int> myList;

		//add checks!!!!!1
		myList.Append(8);
		myList.Append(555);
		myList.Prepend(20);
		myList.Prepend(90);

		cout << myList.getIsEmpty() << endl;
		myList.GetFirst();
		myList.GetLast();
		myList.Get(2);
		myList.Display();

		//check
		cout << "Insert" << endl;
		myList.InsertAt(2, 77777);
		myList.Display();
	}

	
	system("pause");
	return 0;
}