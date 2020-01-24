#pragma once
#include <memory>
#include "Iterator.h"

template<typename T>
class AbstractList {
public:
	virtual AbstractList() {}
	virtual ~AbstractList() {}

	virtual void insert(const T& item) =0;
	virtual void remove() = 0;
};