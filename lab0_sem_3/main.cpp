#include <iostream>
#include "Header.h"
#include "templ.h"
#include <string>
#include <exception>

using namespace std;


int main() {
	
	setlocale(LC_ALL, "rus");

	char s[256];
	char *p = s;

	//int wholeAmountOfElements = setAmount();

	int typeData;

	int *arr = new int[4];
	arr[0] = 53; 
	arr[1] = 88;
	arr[2] = 23;
	arr[3] = 43;

	int curSeq = typeOfSequence();
	
	typeData = typeOfDataOfSeq();

	ArraySequence<int> test;
	test.TestLength(0);
	cout << "\n";
	test.Append(23);
	test.TestLength(1);
	cout << "\n";
	test.TestGetFirst(23);
	test.TestGetLast(23);
	test.TestGet(23,0);
	test.TestGet(23, 1);
	test.TestGet(23, -1);
	test.Append(43);
	test.TestLength(2);
	cout << "\n";
	test.TestGetFirst(23);
	test.TestGetLast(43);
	test.TestGet(23, 0);
	test.TestGet(43, 1);
	test.TestGet(43, -1);
	test.TestGet(43, 2);
	test.Prepend(53);
	test.TestLength(3);
	cout << "\n";
	cout << "Prepend test" <<endl;
	test.TestGetFirst(53);
	test.TestGetLast(43);
	test.TestGet(43, -1);
	test.TestGet(43, 3);
	test.GetSubSequence(1, 1).TestGetSub(1, 23);
	cout << "\n";
	test.TestInsert(arr,2);
	cout << "\n";
	test.TestInsert(arr, -1);
	cout << "\n";
	test.TestInsert(arr, 8);
	cout << "\n";
	test.TestRemove(arr, 43);
	test.TestRemove(arr, 888881);
	/*if (curSeq == 1) {
		if (typeData == 1)
			IntArrSeq();
		if (typeData == 2)
			DoubleArrSeq();
	}
	if (curSeq == 2) {	
		if (typeData == 1)
			IntListSeq();
		if (typeData == 2)
			DoubleListSeq();
	}*/

	
	system("pause");
	return 0;
}