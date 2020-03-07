#include "Vec.h"
    Vector :: Vector()
    {
		p = nullptr;
		n = 0;
    }
	Vector ::Vector(int* p, int n)//создание массива
	{
		this->n = n; 
		this->p = new int[n];
		for (int i = 0; i < n; i++) 
			this->p[i] = p[i];
	}
	Vector :: Vector(const Vector& V)//конструктор копирования
	{ 
		n = V.n;
		p = new int[n];
		for (int i = 0; i < n; i++)
			p[i] = V.p[i];
	}
	Vector :: Vector(Vector&& V) : p(V.p), n(V.n) // конструктор перемещения
	{
	    V.p = nullptr;
		V.n = 0;
	}
	Vector :: ~Vector()
	{
		if (p != nullptr) delete[] p;
	}
	Vector& Vector :: operator++()
	{
		for (int i = 0; i < n; i++)
			p[i]=++p[i];
		return *this;
	}
	int& Vector :: operator[](int i)
	{
		return p[i];
	}