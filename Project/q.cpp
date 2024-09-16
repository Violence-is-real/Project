#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a = 1, b = 0;
	//Задание 1
	b = 2;
	int c;
	c = a - b;
	cout << "a = 1 - b = 0" << c << endl;
	//Задание 2
	cout << boolalpha;

	int a1 = 0, b1 = 0, с1 = 1, d = 1;

	cout << "True = " << (a1 == b1) << endl;
	cout << "False = " << (a1 == d) << endl;

	cout << "True = " << (a1 != c1) << endl;
	cout << "False = " << (b1 != a1) << endl;

	cout << "True = " << (c1 > a1) << endl;
	cout << "False = " << (b1 > d) << endl;

	cout << "True = " << (a1 < c1) << endl;
	cout << "False = " << (d < b1) << endl;

	cout << "True = " << (c1 >= a1) << endl;
	cout << "False = " << (b1 >= d) << endl;

	cout << "True = " << (a1 <= c1) << endl;
	cout << "False = " << (d <= b1) << endl;
	//Задание 3

	int a2 = 5, b2 = 13, c2 = 52, d2 = 13;

	cout << "True = " << (a2 && b2 == d2) << endl;
	cout << "False = " << (a2 || b2 == d2) << endl;
}


