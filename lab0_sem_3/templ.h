#ifndef _TEMPL_L__
#define _TEMPL_L__


template <typename TElement>
class Sequence {
	int amount;
public: 
	Sequence() {
		amount = 0;
	}
	Sequence(int);
	virtual int getLength();//amount of elements
	//virtual void SetSequence(int);
	//virtual TElement GetFirst();
	//virtual TElement GetLast();
	//virtual void SetSequence(); //set all elements
	//virtual TElement Get( int index); //get element by index
	//virtual Sequence<TElement> GetSubSequence(int, int); //get the sequence from the start index to end one
	//virtual int getIsEmpty(); //feature that it is empty
	virtual void Append(TElement item); // add element at the end of the existing seq
	//virtual void Prepend(TElement item); //add element at the begining of the seq
	//virtual void InsertAt(int index, TElement item); //insert element in i position
	//virtual void Remove(TElement item);
};


template <typename TElement>
class ArraySequence: public Sequence<TElement> {
	int currentAmount;
	TElement *currentArr = new TElement[1000]; //choose the type - for user interfce
public:
	ArraySequence() {
		currentAmount = 0;
		for (int i = 0; i < getLength(); i++)
			currentArr[i] = 0;
	}

	//void SetSequence(int);
	ArraySequence(int);
	void Append(TElement, int);
	int getLength();
	void Display();
	//TElement GetFirst();
	ArraySequence<TElement> GetSubSequence(int, int);
};


//template <class T>
//class ListSequence : Sequence<T> {
//	int index;
//	T data;
//public:
//	ListSequence();
//};

#include "templ_impl.h"
#endif // _TEMPL_L__
#pragma once
