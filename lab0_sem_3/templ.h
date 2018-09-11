#ifndef _TEMPL_L__
#define _TEMPL_L__


template <typename TElement>
class Sequence {
	int /*amount*/Length;
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

	//void SetSequence(int);
	void Append(TElement/*, int*/);
	int getLength();
	void changeCondition(int);
	int getIsEmpty(); //feature that it is empty
	void Display();
	TElement GetFirst();
	TElement GetLast();
	TElement Get(int index); //get element by index
	void Prepend(TElement item);
	void InsertAt(int index, TElement item);
	void Remove(TElement item);
	ArraySequence<TElement> GetSubSequence(int, int);
	int chooseFunction();
//	int appOrPrep();
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
