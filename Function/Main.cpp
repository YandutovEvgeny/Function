#include<iostream>
using namespace std;

int Add(int a, int b);  //Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);  //Вызов или использование функции (Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a,b) << endl;
	cout << a << " * " << b << " = " << Mul(a,b) << endl;
	cout << a << " / " << b << " = " << Div(a,b) << endl;

}
int Add(int a, int b)  //Реализация функции (Определение функции - Function defenition)
{
	//Addition - Сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction - Вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - Умножение
	return a * b;
}
double Div(int a, int b)
{
	//Division - Деление
	return (double)a / b;
}