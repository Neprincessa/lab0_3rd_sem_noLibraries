#include <iostream>
#include "Header.h"
#include "templ.h"
#include <string>
#include <exception>
#include "Exceptions.h"


using namespace std;


//
//enum Reason
//{
//	NEGATIVE_NUMBER,
//	OVER_DIAPASON_NUMBER,
//	SECOND_INDEX_LESS_THEN_FIRST
//};
//
//class Exception : public std::exception
//{
//public:
//
//	Reason getReason(int a) const throw();
//	const char* ToString(Reason v);
//
//	virtual const  char* what(int b) const throw() {
//		Reason f = getReason(b);
//		if (f == 0)
//			return "NEGATIVE_NUMBER";
//		if (f == 1)
//			return "OVER_DIAPASON_NUMBER";
//		if (f == 2)
//			return "SECOND_INDEX_LESS_THEN_FIRST";
//	}
//}myEx;



Reason Exception::getReason(int a) const throw() {
	if (a <= 0)
		return NEGATIVE_NUMBER;
	if (a >= 1 && a != 2)
		return OVER_DIAPASON_NUMBER;
	if (a == 2)
		return SECOND_INDEX_LESS_THEN_FIRST;
}

const char* Exception::ToString(Reason v) {
	switch (v)
	{
	case /*Exception::*/NEGATIVE_NUMBER:
	{
		return "NEGATIVE_NUMBER";
		break;
	}
	case OVER_DIAPASON_NUMBER: {
		return "OVER_DIAPASON_NUMBER";
		break;
	}
	case SECOND_INDEX_LESS_THEN_FIRST: {
		return "SECOND_INDEX_LESS_THEN_FIRST";
		break;
	}
	default:
		break;
	}
}


//extensions!!!!!!!!!! 
//library!!!!!

int main() {
	
	setlocale(LC_ALL, "rus");

	char s[256];
	char *p = s;

	//int wholeAmountOfElements = setAmount();

	int typeData;


	int curSeq = typeOfSequence();
	
	try
	{
		throw myEx;
	}
	catch (Exception& e)
	{
		cout << e.what(curSeq) << endl;
	}

	typeData = typeOfDataOfSeq();

	if (curSeq == 1) {
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
	}

	
	system("pause");
	return 0;
}