//#include "Exceptions.h"
#include <string>
using namespace std;

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
//	virtual const  string what(int b) const throw() {
//		Reason f = getReason(b);
//		if (f == 0)
//			return "NEGATIVE_NUMBER";
//		if (f == 1)
//			return "OVER_DIAPASON_NUMBER";
//		if (f == 2)
//			return "SECOND_INDEX_LESS_THEN_FIRST";
//	}
//}myEx;

//
//Reason Exception::getReason(int a) const throw() {
//	if (a <= 0)
//		return NEGATIVE_NUMBER;
//	if (a >= 1 && a != 2)
//		return OVER_DIAPASON_NUMBER;
//	if (a == 2)
//		return SECOND_INDEX_LESS_THEN_FIRST;
//}
//
//const char* Exception::ToString(Reason v) {
//	switch (v)
//	{
//	case /*Exception::*/NEGATIVE_NUMBER:
//	{
//		return "NEGATIVE_NUMBER";
//		break;
//	}
//	case OVER_DIAPASON_NUMBER: {
//		return "OVER_DIAPASON_NUMBER";
//		break;
//	}
//	case SECOND_INDEX_LESS_THEN_FIRST: {
//		return "SECOND_INDEX_LESS_THEN_FIRST";
//		break;
//	}
//	default:
//		break;
//	}
//}

