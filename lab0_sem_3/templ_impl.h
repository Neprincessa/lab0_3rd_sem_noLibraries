#ifndef _TEML__I__
#define _TEML__I__
using namespace std;

template <typename TElement>
Sequence<TElement>:: Sequence(int a) {
	this->amount = /*setAmount()*/a;
}

//template <typename TElement>
//Sequence<TElement>::Sequence() {
//	this->amount = setAmount();
//}

template <typename TElement>
ArraySequence<TElement>::ArraySequence(int a) {
	currentAmount = a;
}

template <typename TElement>
int Sequence<TElement>::getLength() {
	return amount;
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


//for list

template <typename TElement>
void Sequence<TElement>::Append(TElement a) {
	int b = a;
}

template <typename TElement>
void ArraySequence<TElement>::Append(TElement item, int index) {
	currentArr[index] = item;
}

//for list


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


#endif // !_TEML__I__
