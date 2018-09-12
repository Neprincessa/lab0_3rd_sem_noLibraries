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
		myList.Append(8);
		myList.Append(555);
		myList.Display();
	}
	//list
	
	system("pause");
	return 0;
}