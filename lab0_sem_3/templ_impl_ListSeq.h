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
		temp->Prev = tail;
		tail->Next = temp;
		tail = temp;
	}
	else  //if list is empty
	{
		temp->Prev = NULL;
		head = tail = temp;
	}
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




#endif // !_LST__T__
