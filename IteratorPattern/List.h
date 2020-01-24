#pragma once
#include "Container.h"
#include "listIterator.h"
template <typename T>
class List : public AbstractList
{
public: 
	List() : start(nullptr), end(nullptr), count(0), current(nullptr) {
		//this is going to be empty
	}




private : 
	friend class listIterator
	struct Node {
		T data;
		T* next;
		~Node() {
			delete data;
			delete next;
		}
	};
	T* current;
	T* start; 
	T* end;
	int count;
};