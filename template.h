#pragma once
#include <iostream>
using namespace std;

template<class X> class set {

	X *st;
	int tsize;
public:
	set()
	{
		st = new X[5];

		for (int i = 0; i < 5; i++)
		{
			st[i] =  st[0];
		}
	}
	set(int N, X *a)
	{
		tsize = N;
		st = new X[N];
		for (int i = 0; i < N; i++)
		{
			st[i] = a[i];
		}
	}

	/*set operator+=(const X & a)
	{
		tsize = tsize + 1;
		st[tsize - 1] = a;
		return *this;
	}*/

	set operator +=(const set &x)
	{
		for (int i = 0; i < tsize; i++)
		{
			cout << st[i];
		}

		for (int i = 0; i < tsize; i++)
		{
			cout << x.st[i];
		}
		return *this;
	}
	set operator=(const X & a)
	{
		if (st != NULL)
			delete(st);

		st = new X[a.tsize];

		for (int i = 0; i < a.tsize; i++)
		{
			st[i] = a.st[i];
		}
		tsize = a.tsize;
		return *this;
	}

	set operator+(set & a)
	{
		set temp;
		for (int i = 0; i < tsize; i++)
		{
			temp.st[i] = st[i] + a.st[i];
		}
		for (int i = 0; i < tsize; i++)
		{
			cout << temp.st[i] << " ";
		}

		return *this;
	}
	set operator*(const set & a)
	{
		int count = 0;
		bool temp;
		for (int i = 0; i < tsize; i++)
		{
			if (st[i] == a.st[i])
			{
				count++;
			}
		}

		if (count<tsize)
		{
			temp = false;
			cout << "false" << endl;
		}
		else
		{
			temp = true;
			cout << "true" << endl;
		}

		return *this;
	}
	int operator()()
	{
		cout << "Length set= " << tsize << endl;
		return tsize;
	}

	void show()
	{
		for (int i = 0; i < tsize; i++)
		{
			cout << st[i] << " ";
		}
	}
	~set() {}

	friend ostream & operator << (ostream &os, const set &dt)
	{
		for (int i = 0; i < dt.tsize; i++)
		{
			os << dt.st[i] << " ";
		}
		return os;
	}

	X operator[](int i)
	{
		return st[i];
	}

	int getsize()
	{
		return tsize;
	}
};

template <class Y> void sum(set<Y>&a)
{
	Y sum = a[0];

	for (int i = 0; i < a.getsize(); i++)
	{
		sum = sum + a[i];
	}

	cout << "SUMMA: " << sum << endl;
}
