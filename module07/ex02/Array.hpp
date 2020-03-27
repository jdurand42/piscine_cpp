#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<class T>
class Array
{
	public:
	class OutOfBoundsException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Exception raised: Out of bounds");
		}
	};
	
	Array(unsigned int n = 0)
	{
		_array = new T[n];
		bzero(_array, n);
		_size = n;
		//_null = new T;
		bzero(_null, 1);
	};

	~Array() { delete[] _array;};

	Array(const Array& array)
	{
		_array = new T[array._size];
		bzero(_array, array._size);
		for (unsigned int i = 0; i < array._size; i++)
			_array[i] = array._array[i];
		_size = array._size;
	};
	void operator = (const Array& array) 
	{
		_array = new T[array._size];
		bzero(_array, array._size);
		for (unsigned int i = 0; i < array._size; i++)
			_array[i] = array._array[i];
		_size = array._size;
	};

	T& operator [](unsigned int i)
	{
		try
		{	
			if (i >= _size)
				throw (std::exception());
			return (_array[i]);
		}
		catch (std::exception& e)
		{	
//			T null = T(0);
			std::cout << "Index out of range, aborting ...\n";
			exit(1);
			return (*_null);
		}
//		return (_array[i]);
	}
	
	unsigned int size() const
	{
		return (_size);
	}
	
	private:
	unsigned int _size;
	T *_array;
	T _null[1];
};

#endif