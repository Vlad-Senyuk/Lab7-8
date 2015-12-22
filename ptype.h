#pragma once
#include <iostream>
#include <string>
using namespace std;

class transp_sred
{
	int number;
	string name;
	int autopr;
public:
	transp_sred()
	{
		number = 0;
		name = "";
		autopr = 0;
	}

	transp_sred(int x, string y, int z)
	{
		number = x;
		name = y;
		autopr = z;
	}

	void push(int x, string y, int z)
	{
		number = x;
		name = y;
		autopr = z;
	}

	void show()
	{
		cout << "Number auto: " << number << endl;
		cout << "Name auto: " << name << endl;
		cout << "Autoprobeg: " << autopr << endl;
	}

	transp_sred operator=(transp_sred & a)
	{
		number = a.number;
		name = a.name;
		autopr = a.autopr;
		return *this;
	}

	transp_sred operator+(transp_sred &a)
	{
		int x;
		string y;
		int z;
		x = number + a.number;
		y = name + a.name;
		z = autopr + a.autopr;

		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
		return *this;
	}

	transp_sred operator==(const transp_sred &a)
	{
		number = a.number;
		name = a.name;
		autopr = a.autopr;
		return *this;
	}

	friend ostream & operator<<(ostream & os, transp_sred & a)
	{
		a.show();
		return os;
	}

	transp_sred operator* (const transp_sred & a)
	{
		if (name == a.name)
		{
			cout << "Obj1=Obj2" << endl;
		}
		else
		{
			cout << "Obj1!=Obj2" << endl;
		}
		return *this;
	}

	transp_sred operator+=(transp_sred &a)
	{
		int x;
		string y;
		int z;
		x = a.number;
		y = a.name;
		z = a.autopr;

		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
		cout << number << endl;
		cout << name << endl;
		cout << autopr << endl;

		return *this;
	}

};
