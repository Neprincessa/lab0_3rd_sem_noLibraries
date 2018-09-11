#ifndef _TEML__I__
#define _TEML__I__
using namespace std;

//template <typename TElement>
//Sequence<TElement>:: Sequence(int a) {
//	this->Length = /*setAmount()*/a;
//	this->isEmpty = 1;
//}


//template <typename TElement>
//ArraySequence<TElement>::ArraySequence(int a) {
//	currentAmount = a;
//	isEmpty = 0;
//}

template <typename TElement>
int Sequence<TElement>::getLength() {
	return Length;
}

template <typename TElement>
int ArraySequence<TElement>::getLength() {
	return currentAmount;
}

//template <typename TElement>
//void Sequence<TElement>::SetSequence(int am) {
//	amount = am;
//}
//
//template <typename TElement>
//void ArraySequence<TElement>::SetSequence(int am) {
//
//	/*cout << "Fill in ";
//	cout << getLength();
//	cout << " elements" << endl;
//	cout << "\n";*/
//	currentAmount = am;
//
//	//for (int i = 0; i < getLength(); i++) {
//	//	cout << i + 1 << ") ";
//	//	cin >> currentArr[i];
//	//}
//}

template <typename TElement>
void Sequence<TElement>::Append(TElement a) {
	TElement b = a;
}


template <typename TElement>
void Sequence<TElement>:: changeCondition(int condition) {
	isEmpty = condition;
}

template <typename TElement> 
void ArraySequence<TElement>::changeCondition(int condition) {
	isEmpty = condition;
}

//check type!!!!!!!!!!!!!!!!
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
	
	/*currentArr[index] = item;*/
	changeCondition(0);
}


template <typename TElement>
int Sequence<TElement>::getIsEmpty() {
	return isEmpty;
}

template <typename TElement> 
int ArraySequence<TElement>::getIsEmpty() {
	/*cout << isEmpty;
	cout << "\n";*/
	return isEmpty;
}

template <typename TElement>
ArraySequence<TElement> ArraySequence<TElement>::GetSubSequence(int startIndex, int endIndex) {

	ArraySequence<TElement> result/*(endIndex - startIndex+1)*/;
	result.currentAmount = /*endIndex - startIndex + 1*/0;
	int j = startIndex;
	for (int i = 0; i < endIndex - startIndex+1; i++) {
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
TElement Sequence<TElement>::GetFirst() {
	cout << "The first element is: ";
	return 0;
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
TElement Sequence<TElement>::GetLast() {
	cout << "The last element is: ";
	return 0;
}

template <typename TElement> 
TElement ArraySequence<TElement>::GetLast() {
	cout << "\n";
	cout << "The last element is: ";
	cout << currentArr[getLength()-1];
	return currentArr[getLength() - 1];
	cout << "\n";
}

template <typename TElement>
TElement Sequence<TElement>::Get(int index) {
	cout << "The current element is: ";
	return 0;
}

template <class TElement>
TElement ArraySequence<TElement>::Get(int index) {
	cout << "\n";
	cout << "The current element is: ";
	cout << currentArr[index - 1] << endl;
	return currentArr[index - 1];
}


template <typename TElement>
void Sequence<TElement>::Prepend(TElement item) {
	TElement b = item;
}


template <typename TElement>
void ArraySequence<TElement>::Prepend(TElement item) {
	
	if (getLength() == 0) {
		currentArr[0] = item;
		currentAmount++;
	}
	else {
		TElement *newArr = new TElement[getLength() + 1];
		for (int i = 1; i < getLength()+1; i++)
			newArr[i] = currentArr[i-1];
		newArr[0] = item;
		currentAmount++;
		
		for (int i = 0; i < getLength(); i++)
			currentArr[i] = newArr[i];
	}
	changeCondition(0);
}

template <typename TElement>
void Sequence<TElement>::InsertAt(int index, TElement item) {
	cout << "Insert element" << endl;
}

template <typename TElement>
void ArraySequence<TElement>::InsertAt(int index, TElement item) {
	if (getIsEmpty() == 1) {
		currentAmount = 1;
		currentArr[0] = item;
	}
	else {
		TElement *newArr = new TElement[getLength() + 1];
		for (int i = 0; i < index-1; i++)
			newArr[i] = currentArr[i];
		newArr[index-1] = item;
		int j = index-1;
		for (int i = index ;i< getLength(); i++) {
			newArr[i] = currentArr[j];
			j++;
		}
		newArr[getLength()] = currentArr[getLength()-1];
		currentAmount++;
		for (int i = 0; i < getLength(); i++)
			currentArr[i] = newArr[i];
	}
}

template <typename TElement>
void Sequence<TElement>:: Remove(TElement item) {
	cout << "Delete element" << endl;
}


template <typename TElement>
void ArraySequence<TElement>::Remove(TElement item) {

	int i = 0;  
	int j = 0;
	bool flag = false;
	//isempty

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
#endif // !_TEML__I__
