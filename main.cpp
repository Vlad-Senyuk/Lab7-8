#include <iostream>
#include "Template.h"
#include "ptype.h"
#include <string>
using namespace std;

void main()
{
	//int sz;
	//cout << "Please, input size for massiv int" << endl;
	//cin >> sz;
	//int *mas0 = new int[sz];
	//for (int i = 0; i < sz; i++)
	//{
	//	cin >> mas0[i];
	//}

	//int *mas1 = new int[sz];
	//for (int i = 0; i < sz; i++)
	//{
	//	cin >> mas1[i];
	//}

	//set<int> obj(5, mas0);
	//set<int> obj1(5, mas1);
	//obj.show();
	//cout << endl;
	//obj1.show();
	//cout << endl;
	//obj();
	//obj*obj1;
	//set<int> obj2;
	//obj2 = obj + obj1;
	//cout << endl;
	//obj += 10;
	//obj.show();
	//cout << endl;
	//sum<int>(obj);
	////float

	//int sz1;
	//cout << "Please, input size for massiv float" << endl;
	//cin >> sz1;
	//float *mas2 = new float[sz1];
	//for (int i = 0; i < sz1; i++)
	//{
	//	cin >> mas2[i];
	//}
	//float *mas3 = new float[sz1];
	//for (int i = 0; i < sz1; i++)
	//{
	//	cin >> mas3[i];
	//}

	//set<float> obj22(5, mas2);
	//set<float> obj3(5, mas3);
	//obj22.show();
	//cout << endl;
	//obj3.show();
	//cout << endl;
	//obj22();
	//obj22*obj3;
	//set<float> obj4;
	//obj4 = obj22 + obj3;
	//cout << endl;
	//obj22 += 10.5;
	//obj22.show();
	//cout << endl;

	//ptype
	transp_sred m(2032, "BMW", 30000);
	set<transp_sred> tm(1, &m), tv;
	
	transp_sred m1(4634, "GAZ", 40000);
	tm();
	m + m1;
	m*m1;
	m += m1;

	tm=tm + tv;

	cout << "_____________________________"<< endl;
	tm.show();
	tm += tv;
	//tm*tv;
	
	cout << " _____________________________" << endl;
	sum<transp_sred>(tm);
}
