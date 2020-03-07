#include <iostream>
#include <vector>
#include<fstream>
#include "Vec.h"
using namespace std;
ostream& operator<<(ostream& out, Vector& V)
{
	out << "n=" << V.n << endl << "Vector:";
	for (int i = 0; i < V.n; i++)
		out << V[i] << " ";
	return out;
};
istream& operator>>(istream& in, Vector& V)
{
	in >> V.n;
	if (V.p == nullptr)
	V.p = new int[V.n];
	for (int i = 0; i < V.n; i++)
		in >> V[i];
	return in;
};
ofstream& operator<<(ofstream& fout, Vector& V)
{
	fout << V.n << endl;
	for (int i = 0; i < V.n; i++)
		fout << V.p[i] << " ";
	return fout;
}
ifstream& operator>>(ifstream& fin, Vector& V)
{
	fin >> V.n;
	fin.ignore(2, '\n');
	for (int i = 0; i < V.n; i++)
		fin >> V.p[i];
	return fin;
}

int main()
{
	int n;
	int* p;
	ifstream fint("C:\\Users\\Василий\\source\\repos\\ЛР2\\ЛР2\\input.txt");
	fint >> n;
	p = new int[n];
	fint.ignore(2, '\n');
		for (int i = 0; i < n; i++)
			fint >> p[i];
	fint.close();
	Vector v(p, n);
	++v;
	cout << "++v: " << v << endl;
	v[3] = 5;
	cout << "v[3]=5: " << v << endl;
	Vector v1;
	cout << "write v1" << endl;
	cin >> v1;
	Vector v2 = v1;
	ofstream fout("output.txt");
	fout << v2;
	fout.close();
	system("pause");
}
