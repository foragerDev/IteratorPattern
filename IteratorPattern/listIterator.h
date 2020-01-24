#pragma once
#include "List.h"
#include "Iterator.h"
template <typename T>
class listIterator : public Iterator {
	virtual T* end() const override {
		return List::end;
	}
	virtual T* end() override {
		return std::const_cast<T*>(end());
	}
	virtual T* begin() override const {
		return List::strat;
	}
	virtual T* begin() override {
		return std::const_cast<T*>(begin());
	}
	virtual T* rend() override const {
		return List::end;
	}
	virtual T* rend() override {
		return std::const_cast<T*>(rend());
	}
	virtual T* rbegin() const override {
		return List::end;
	}
	virtual T* rbegin() override {
		return std::const_cast<T*>(rbegin());
	}
	virtual T* current() override const {
		return List::current;
	}
};