#include<iostream>
using std::cin;
using std::cout;
int main()
{
	float a, b, c, s,A ;
	cout << "enter a : " ;
	cin >> a ;
	cout << "enter b : ";
	cin >> b;
	cout << "enter c : ";
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		s = (a + b + c) / 2;
		A = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << "triangle\narea = "<< A ;
	}
	else
	{
		cout << "not triangle\narea = 0";
	}
	return 0;
}