#ifndef _TEML__I__
#define _TEML__I__
using namespace std;

template <typename TElement>
Sequence<TElement>:: Sequence(int a) {
	this->Length = /*setAmount()*/a;
	this->isEmpty = 1;
}

//template <typename TElement>
//Sequence<TElement>::Sequence() {
//	this->amount = setAmount();
//}

template <typename TElement>
ArraySequence<TElement>::ArraySequence(int a) {
	currentAmount = a;
	isEmpty = 0;
}

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
	int b = a;
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
void ArraySequence<TElement>::Append(TElement item, int index) {
	currentArr[index] = item;
	changeCondition(0);
}


template <typename TElement>
int Sequence<TElement>::getIsEmpty() {
	return isEmpty;
}

template <typename TElement> //doesn't work
int ArraySequence<TElement>::getIsEmpty() {
	cout << isEmpty;
	cout << "\n";
	return isEmpty;
}

template <typename TElement>
ArraySequence<TElement> ArraySequence<TElement>::GetSubSequence(int startIndex, int endIndex) {

	ArraySequence<TElement> result(endIndex - startIndex+1);

	int j = startIndex;
	for (int i = 0; i < endIndex - startIndex+1; i++) {
		result.Append(currentArr[j], i);
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

#endif // !_TEML__I__
