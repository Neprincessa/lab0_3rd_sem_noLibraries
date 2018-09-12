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

template <typename TElement>
TElement ListSequence<TElement>::Get(int index) {
	char s[256];
	char *p = s;

	int i = 1;

	//to main!!!!!!!!!1
	if (index<1 || index > amount) {
		cout << "Fill in the index from 1 to ";
		cout << amount << " ";
		cin >> s;
		while (!checkDataType(p))
			cin >> s;
		index = atoi(s);
		while (index <1 || index > amount) {
			cout << "Fill in the index from 1 to ";
			cout << amount << " ";
			cin >> s;
			while (!checkDataType(p))
				cin >> s;
			index = atoi(s);
		}
	}

	if (getIsEmpty() != 1) {
		
		TElement result;
		int flag = 0;

		Node <TElement> *tmp = head;
		while (tmp) {
			if (i == index) {
				result = tmp->data;
				flag = 1;
			}
			tmp = tmp->Next;
			i++;
		}

		if (flag == 1) {
			cout << "\n";
			cout << "The " << index << "element is: ";
			cout << result << endl;
			return result;
		}
			
		else {
			cout << "The element wasn't found" << endl;
			return -1;
		}
	}
	else {
		cout << "You can't get the element from the empty sequence" << endl;
		return -1;
	}
}


template <typename TElement>
void ListSequence<TElement>::InsertAt(int index, TElement item) {
	int i = 1;
	if (head != NULL) {
		TElement *forNewList = new TElement[amount + 1];
		Node <TElement> *tmp = head;

		while (i != index && tmp) {
			forNewList[i-1] = tmp->data;
			tmp = tmp->Next;
			i++;
		}
		forNewList[i-1] = item;
		while (tmp) {
			forNewList[i] = tmp->data;
			tmp = tmp->Next;
			i++;
		}
		amount++;
		int curAm = amount;
		head = NULL;
		tail = NULL;
		amount = 0;
		for (int i = 0; i < curAm; i++)
			Append(forNewList[i]);
	}
	else {
		Node <TElement> *temp = new Node<TElement>;
		temp->data = item;
		temp->Prev = NULL;
		amount++;
		head = tail = temp;
	}
}

//template <typename TElement>
//void ListSequence<TElement> ::Remove(TElement item) {
//
//}

#endif // !_LST__T__
