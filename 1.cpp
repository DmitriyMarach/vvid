#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <locale>
#include <cmath>



using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "Введите градусную меру угла ." << endl;
	cin >> a;
	cout << pow(cos((a*M_PI)/180),2);
	return 0;
}

