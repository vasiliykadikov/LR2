#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Vector
{
	    int n;
		int* p;
		
	public:
		Vector();
		Vector(int* p, int n);
		Vector(const Vector& V);
		Vector(Vector&& V);
		~Vector();
		Vector& operator++();
		int& operator[](int i);
		friend ostream& operator<<(ostream& out, Vector& V);
		friend istream& operator>>(istream& in, Vector& V);
		friend ofstream& operator<<(ofstream& fout, Vector& V);
		friend ifstream& operator>>(ifstream& fin, Vector& V);
		
};

