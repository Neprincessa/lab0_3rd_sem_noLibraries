#include <iostream>
#include "Header.h"
#include "Templ.h"

bool checkDataType(char *ptr) {
	bool isd = true;
	while (*ptr)
		if (!isdigit(*ptr++))
		{
			isd = false;
			break;
		}
	if (!isd)
		cout << "Fill in the positive integer, not a string or a double number" << endl;
	return isd;
}

int setAmount() {
	int amount = 0;
	char s[256];
	char *p = s;

	cout << "Fill in the amount of elements" << endl;
	cin >> s;

	while (!checkDataType(p))
		cin >> s;
	amount = atoi(s);
	while (amount < 0) {
		cout << "Fill in the positive number" << endl;
		cin >> s;
		while (!checkDataType(p))
			cin >> s;
		amount = atoi(s);
		}

	
	return amount;
}

