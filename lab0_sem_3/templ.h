#ifndef _TEMPL_L__
#define _TEMPL_L__

template <typename TElement>
struct Node
{
	TElement data;
	Node *Next, *Prev;
};

template <typename TElement>
class Sequence {
	int Length;
	int isEmpty; 
public: 
	Sequence() {
		Length = 0;
		isEmpty = 1;
	}
	virtual int getLength();//amount of elements
	virtual TElement GetFirst();
	virtual TElement GetLast();
	virtual void changeCondition(int);
	virtual TElement Get( int index); //get element by index
	virtual int getIsEmpty(); //feature that it is empty
	virtual void Append(TElement item); // add element at the end of the existing seq
	virtual void Prepend(TElement item); //add element at the begining of the seq
	virtual void InsertAt(int index, TElement item); //insert element in i position
	virtual void Remove(TElement item);
	virtual void Display();
	virtual int chooseFunction(); // what to do with func

	//virtual Sequence<TElement> GetSubSequence(int, int); //get the sequence from the start index to end one
};


template <typename TElement>
class ArraySequence: public Sequence<TElement> {
	int currentAmount;
	int isEmpty;
	TElement *currentArr = new TElement[1000]; //choose the type - for user interfce
public:
	ArraySequence() {
		currentAmount = 0;
		isEmpty = 1;
		for (int i = 0; i < getLength(); i++)
			currentArr[i] = 0;
	}
	~ArraySequence();
	void Append(TElement);
	int getLength();
	void changeCondition(int);
	int getIsEmpty(); //feature that it is empty
	void Display();
	TElement GetFirst();
	TElement GetLast();
	TElement Get(int); //get element by index
	void Prepend(TElement);
	void InsertAt(int, TElement);
	void Remove(TElement);
	ArraySequence<TElement> GetSubSequence(int, int);
	int chooseFunction();
};


template <typename TElement>
class ListSequence : Sequence<TElement> {
	int amount;
	int isEmpty;
	Node<TElement> *head;
	Node<TElement> *tail;
public:
	ListSequence() {
		amount = 0;
		isEmpty = 1;
		head = NULL;
		tail = NULL;
	}
	~ListSequence();
	void Append(TElement);
	void Prepend(TElement);
	int getLength();
	int getIsEmpty();
	void changeCondition(int);
	TElement GetFirst();
	TElement GetLast();
	TElement Get(int);
	void InsertAt(int, TElement);
	void Remove(TElement);
	void Display();
};

#include "templ_impl.h"
#include "templ_impl_ArrSeq.h"
#include "templ_impl_ListSeq.h"
#endif // _TEMPL_L__
#pragma once
