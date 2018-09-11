#ifndef _ARR__T__
#define _ARR__T__
using namespace std;

//----------------------------------------------------------ArraySequence-------------------------------------------//

template <typename TElement>
int ArraySequence<TElement>::getLength() {
	return currentAmount;
}

template <typename TElement>
void ArraySequence<TElement>::changeCondition(int condition) {
	isEmpty = condition;
}

template <typename TElement>
void ArraySequence<TElement>::Append(TElement item) {
	if (getLength() == 0) {
		currentArr[0] = item;
		currentAmount++;
	}
	else {
		TElement *newArr = new TElement[getLength() + 1];
		for (int i = 0; i < getLength(); i++)
			newArr[i] = currentArr[i];
		newArr[getLength()] = item;
		currentAmount++;
		for (int i = 0; i < getLength(); i++)
			currentArr[i] = newArr[i];
	}

	changeCondition(0);
}

template <typename TElement>
int ArraySequence<TElement>::getIsEmpty() {
	return isEmpty;
}

template <typename TElement>
ArraySequence<TElement> ArraySequence<TElement>::GetSubSequence(int startIndex, int endIndex) {

	ArraySequence<TElement> result/*(endIndex - startIndex+1)*/;
	result.currentAmount = /*endIndex - startIndex + 1*/0;
	int j = startIndex;
	for (int i = 0; i < endIndex - startIndex + 1; i++) {
		result.Append(currentArr[j]/*, i*/);
		j++;
	}

	return result;
}

template <typename TElement>
void ArraySequence<TElement>::Display() {
	cout << "Current array sequence:" << endl;
	for (int i = 0; i < getLength(); i++) {
		cout << i + 1 << ") ";
		cout << currentArr[i];
		cout << "\n";
	}
}

template <typename TElement>
TElement ArraySequence<TElement>::GetFirst() {
	cout << "\n";
	cout << "The first element is: ";
	cout << currentArr[0];
	return currentArr[0];
	cout << "\n";
}

template <typename TElement>
TElement ArraySequence<TElement>::GetLast() {
	cout << "\n";
	cout << "The last element is: ";
	cout << currentArr[getLength() - 1];
	return currentArr[getLength() - 1];
	cout << "\n";
}

template <class TElement>
TElement ArraySequence<TElement>::Get(int index) {
	cout << "\n";
	cout << "The current element is: ";
	cout << currentArr[index - 1] << endl;
	return currentArr[index - 1];
}

template <typename TElement>
void ArraySequence<TElement>::Prepend(TElement item) {

	if (getLength() == 0) {
		currentArr[0] = item;
		currentAmount++;
	}
	else {
		TElement *newArr = new TElement[getLength() + 1];
		for (int i = 1; i < getLength() + 1; i++)
			newArr[i] = currentArr[i - 1];
		newArr[0] = item;
		currentAmount++;

		for (int i = 0; i < getLength(); i++)
			currentArr[i] = newArr[i];
	}
	changeCondition(0);
}

template <typename TElement>
void ArraySequence<TElement>::InsertAt(int index, TElement item) {
	if (getIsEmpty() == 1) {
		currentAmount = 1;
		currentArr[0] = item;
	}
	else {
		TElement *newArr = new TElement[getLength() + 1];
		for (int i = 0; i < index - 1; i++)
			newArr[i] = currentArr[i];
		newArr[index - 1] = item;
		int j = index - 1;
		for (int i = index; i< getLength(); i++) {
			newArr[i] = currentArr[j];
			j++;
		}
		newArr[getLength()] = currentArr[getLength() - 1];
		currentAmount++;
		for (int i = 0; i < getLength(); i++)
			currentArr[i] = newArr[i];
	}
}

template <typename TElement>
void ArraySequence<TElement>::Remove(TElement item) {

	int i = 0;
	int j = 0;
	bool flag = false;

	if (getIsEmpty() == 1)
		cout << "You can't remove element from empty sequence" << endl;
	else {
		TElement *newArr = new TElement[getLength() - 1];
		while (i<getLength()) {
			if (currentArr[i] != item) {
				newArr[j] = currentArr[i];
				j++;
			}
			if (currentArr[i] == item)
				flag = true;
			i++;
		}
		if (flag == false)
			cout << "The element to remove hasn't been found" << endl;
		else
		{
			currentAmount--;
			for (int i = 0; i < getLength(); i++)
				currentArr[i] = newArr[i];
		}
	}
}

template <typename TElement>
int ArraySequence<TElement>::chooseFunction() {
	int typeOfFunction = whatFunc();
	return typeOfFunction;
}

#endif // !_ARR__T__