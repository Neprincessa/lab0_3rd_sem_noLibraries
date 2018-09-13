#ifndef _EX__E__
#define _EX__E__

#include <iostream>
#include <exception>
#include <string.h>

enum Reason
{
	NEGATIVE_NUMBER,
	OVER_DIAPASON_NUMBER,
	SECOND_INDEX_LESS_THEN_FIRST
};

class Exception: public std::exception
{
public:
	
	Reason getReason(int a) const throw();
	const char* ToString(Reason v);
	
	virtual const  char* what(int b) const throw() {
		Reason f = getReason(b);
		if (f == 0)
			return "NEGATIVE_NUMBER";
		if (f == 1)
			return "OVER_DIAPASON_NUMBER";
		if (f == 2)
			return "SECOND_INDEX_LESS_THEN_FIRST";
	}
}myEx;

#endif // !_EX__E__
