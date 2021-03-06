// HW 3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

//1.	Напишите шаблон функции, которая вычисляет корень линейного уравнения.
template<typename T>
void f1(T a, T b) {
	T x;
	x = -a / b;
	cout << x;
	cout << endl;
}

//2.	Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.
template<typename T>
void f2(T* a, int n) {
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << sum / n << endl;
}

//3.	Написать шаблонную функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива.
template<typename T>
void f3(T* a, int n) {
	T z=0, x=0, c=0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0)
			z++;
		else if (a[i] < 0)
			x++;
		else if (a[i] == 0)
			c++;
	}
	cout << "polozhitelnie=" << z << endl;
	cout << "otricatelnie=" << x << endl;
	cout << "nulevie=" << c << endl;
}

//4.	Написать шаблонную функцию, определяющую минимум и максимум (значение и номер) элементов передаваемого ей массива.
template<typename T>
void f4(T* a, int n) {
	T min=a[0], max=a[0];
	int c=0, b=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min) {
			min = a[i];
			c = i; }
		else if (a[i] > max) {
			max = a[i];
			b = i; }
	}
	cout << "minimum: " << min <<"["<< c <<"]"<< endl;
	cout << "maximum: " << max <<"["<< b <<"]"<< endl;
}

//5.	Написать шаблонную функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.
template<typename T>
void f5(T* a, int n) {
	for (int i = 0; i < n/2; i++)
	{
		swap(a[i], a[n - 1 - i]);
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

//6.	Написать функцию, возвращающую количество простых чисел в передаваемом ей массиве.
template<typename T>
void f6(T* a, int n) {
	int z;
	int sum=0;
	for (int i = 0; i < n; i++) {
		z = 0;
		for (int j = 2; j < a[i]; j++) {
			if (a[i] % j == 0)
				z++;
		}
		if (z == 0)
			sum++;
	}
	cout << sum<<endl;
}


int main()
{
	//6 zadanie
	/*int a[] = { 2,4,5,7,8,9,11 };
	f6(a, 7);*/

	//5 zadanie
	/*int a[] = { 2,3,4,5,6 };
	f5(a, 5);*/

	//4 zadanie
	/*int a[] = { 1,2,3,4,5 };
	f4(a, 5);*/

	//3 zadanie
	/*int a[] = { 0, 3, 5, -1, -10, 6, -4 };
	f3(a, 7);*/

	//2 zadanie
	/*double a[] = { 1.0,2.0,3.0,4.0 };
	f2(a, 4);*/

	//1 zadanie
	/*double a, b;
	cin >> a >> b;
	f1(a, b);*/

	system("pause");
    return 0;
}

