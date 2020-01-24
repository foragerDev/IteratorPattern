#pragma once
template<typename T>
class Iterator{
public:
	virtual Iterator() {};
	virtual T* end()			=0;
	virtual T* end() const		=0;
	virtual T* begin()			=0;
	virtual T* begin() const	=0;
	virtual T* rend()			=0;
	virtual T* rend() const		=0; 
	virtual T* rbegin()			=0;
	virtual T* rbegin() const	=0;
	virtual T* current() const  =0;
	//virtual T* operator++()		=0;
};