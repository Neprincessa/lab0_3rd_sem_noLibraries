#ifndef _TEML__I__
#define _TEML__I__
using namespace std;

//----------------------------------------------------------Sequence-------------------------------------------------------//
template <typename TElement>
int Sequence<TElement>::getLength() {
	return Length;
}

template <typename TElement>
void Sequence<TElement>::Append(TElement a) {
	TElement b = a;
}

template <typename TElement>
void Sequence<TElement>::changeCondition(int condition) {
	isEmpty = condition;
}

template <typename TElement>
int Sequence<TElement>::getIsEmpty() {
	return isEmpty;
}

template <typename TElement>
TElement Sequence<TElement>::GetFirst() {
	cout << "The first element is: ";
	return 0;
}

template <typename TElement>
TElement Sequence<TElement>::GetLast() {
	cout << "The last element is: ";
	return 0;
}

template <typename TElement>
TElement Sequence<TElement>::Get(int index) {
	cout << "The current element is: ";
	return 0;
}

template <typename TElement>
void Sequence<TElement>::Prepend(TElement item) {
	TElement b = item;
}

template <typename TElement>
void Sequence<TElement>::Remove(TElement item) {
	cout << "Delete element" << endl;
}

template <typename TElement>
void Sequence<TElement>::InsertAt(int index, TElement item) {
	cout << "Insert element" << endl;
}

template <typename TElement>
int Sequence<TElement>::chooseFunction() {
	return 0;
}


template <typename TElement>
void Sequence<TElement>::Display() {
	cout << "The sequence is:" << endl;
}

template <typename TElement>
void Sequence<TElement>::TestAppend(TElement a, int len) {
	len = 0;
}

template <typename TElement>
void Sequence<TElement>::TestGet(TElement a, int b) {
	b = 0;
}

template <typename TElement>
void Sequence<TElement>::TestGetFirst(TElement h) {
	h = 0;
}

template <typename TElement>
void Sequence<TElement>::TestGetLast(TElement f) {
	TElement g = f + 1;
}


template <typename TElement>
void Sequence<TElement>::TestLength(int l) {
	l = 0;
}

template <typename TElement>
void Sequence<TElement>::TestGetSub(int a, TElement el) {
	a = 0;
}

template <typename TElement>
void Sequence<TElement>::TestInsert(int *ar, int ind, TElement el) {
	ar[0] = 0;
}

template <typename TElement>
void Sequence<TElement> ::TestRemove(int* a, TElement elem) {

}
#endif // !_TEML__I__
