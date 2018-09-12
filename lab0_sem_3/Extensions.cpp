#include <iostream>
#include "Header.h"
#include <string>

using namespace std;

class Exception : public std::exception {
public:
	enum Reason
	{
		NEGATIVE_NUMBER,
		OVER_DIAPASON_NUMBER,
		SECOND_INDEX_LESS_THEN_FIRST
	};

	Reason getReason(int a) const throw() {
		if (a <= 0)
			return NEGATIVE_NUMBER;
		if (a >= 1 && a != 2)
			return OVER_DIAPASON_NUMBER;
		if (a == 2)
			return SECOND_INDEX_LESS_THEN_FIRST;
	}

	const char* ToString(Reason v) {
		switch (v)
		{
		case /*Exception::*/NEGATIVE_NUMBER:
		{
			return "NEGATIVE_NUMBER";
			break;
		}
		case /*Exception::*/OVER_DIAPASON_NUMBER: {
			return "OVER_DIAPASON_NUMBER";
			break;
		}
		case /*Exception::*/SECOND_INDEX_LESS_THEN_FIRST: {
			return "SECOND_INDEX_LESS_THEN_FIRST";
			break;
		}
		default:
			break;
		}
	}

	virtual const string what(int b) const throw() {
		//ToString(getReason(b));
		Reason f = getReason(b);
		//ToString(f);
		cout << f << endl;
		if (f == 0)
			return "NEGATIVE_NUMBER";
		if (f == 1)
			return "OVER_DIAPASON_NUMBER";
		if (f == 2)
			return "SECOND_INDEX_LESS_THEN_FIRST";
		//return ENUM_TO_STR(getReason(b))/*"fdfd"*/;
	}
}myEx;

int duf() {

	int a;
	cin >> a;

	try
	{
		throw myEx;

	}
	catch (Exception& e)
	{
		//cout << e.what(a) << endl;
		cout << e.what(a) << endl;
	}

	
	return 0;
}