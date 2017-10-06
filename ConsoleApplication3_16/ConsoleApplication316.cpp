// ConsoleApplication316.cpp: 定义控制台应用程序的入口点。
//3.16.cpp重载函数举例

#include "stdafx.h"
#include<iostream>
using namespace std;

//重载函数
int sos(int a, int b) {
	return a*a + b*b;
}
double sos(double a, double b) {
	return a*a + b*b;
}

int main()
{
	int m, n;
	cout << "Enter two integer: ";
	cin >> m >> n;
	cout << "Their sum of square: " << sos(m, n) << endl;

	double x, y;
	cout << "enter two real number: ";
	cin >> x >> y;
	cout << "Their sum of square: " << sos(x, y) << endl;
	return 0;
}

