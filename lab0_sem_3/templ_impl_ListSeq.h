#ifndef _LST__T__
#define _LST__T__
using namespace std;

//----------------------------------------------------------ListSequence-------------------------------------------//

template <typename TElement>
void ListSequence<TElement>::Append(TElement item) {
	
	Node<TElement> *temp = new Node<TElement>;
	temp->Next = NULL;
	temp->data = item;

	if (head != NULL)   //if list is not empty
	{
		amount++;
		temp->Prev = tail;
		tail->Next = temp;
		tail = temp;
	}
	else  //if list is empty
	{
		amount++;
		temp->Prev = NULL;
		head = tail = temp;
	}
	changeCondition(0);
}


template <typename TElement>
void ListSequence<TElement>::Prepend(TElement item) {
	
	Node<TElement> *temp = new Node<TElement>;
	temp->Prev = NULL;
	temp->data = item;

	if (head != NULL)   //if list is not empty
	{
		amount++;
		temp->Next = head;
		head->Prev = temp;
		head = temp;
	}
	else  //if list is empty
	{
		amount++;
		temp->Prev = NULL;
		head = tail = temp;
	}
	changeCondition(0);
}

template <typename TElement>
void ListSequence<TElement>::Display() {
	
	Node<TElement> *temp = head;
	int i = 0;
	while (temp != NULL)
	{
		i++;
		cout << i << ") ";
		cout << temp->data;
		cout << "\n";
		temp = temp->Next;
	}
	cout << "\n";
}

template <typename TElement>
int ListSequence<TElement>::getLength() {
	return this->amount;
}

template <typename TElement>
void ListSequence<TElement>::changeCondition(int state) {
	isEmpty = state;
}


template <typename TElement>
int ListSequence<TElement>::getIsEmpty() {
	return isEmpty;
}

template <typename TElement>
TElement ListSequence <TElement>::GetFirst() {
	cout << "\n";
	if (getIsEmpty() != 1) {
		cout << "The first element is: ";
		cout << head->data;
		cout << "\n";
		return head->data;
	}
	else {
		cout << "You can't get the element from the emptry sequence" << endl;
		cout << "\n";
		return -1;
	}
}

template <typename TElement>
TElement ListSequence<TElement>::GetLast() {
	cout << "\n";
	if (getIsEmpty() != 1) {
		cout << "The last element is: ";
		cout << tail->data;
		cout << "\n";
		return tail->data;
	}
	else {
		cout << "You can't get the element from the emptry sequence" << endl;
		cout << "\n";
		return -1;
	}
}
#endif // !_LST__T__
