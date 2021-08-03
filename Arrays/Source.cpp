#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shifts.h"

#define Home_Work 

void main()
{
	setlocale(LC_ALL, "Rus");
	
#ifdef Home_Work
	cout << "Int: " << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма всех элементов: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(arr, n) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(arr, n) << endl;
	ShiftLeft(arr, n);
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	cout << "Double: " << endl;
	const int B_SIZE = 8;
	double brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Сумма всех элементов: " << Sum(brr, B_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(brr, B_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(brr, B_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(brr, B_SIZE) << endl;
	ShiftLeft(brr, B_SIZE);
	Print(brr, B_SIZE);
	ShiftRight(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	cout << "short: " << endl;
	const short C_SIZE = 10;
	short crr[C_SIZE];
	FillRand(crr, C_SIZE);
	Print(crr, C_SIZE);
	Sort(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << "Сумма всех элементов: " << Sum(crr, C_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(crr, C_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(crr, C_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(crr, C_SIZE) << endl;
	ShiftLeft(crr, C_SIZE);
	Print(crr, C_SIZE);
	ShiftRight(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	cout << "float: " << endl;
	const int D_SIZE = 12;
	float drr[D_SIZE];
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	Sort(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "Сумма всех элементов: " << Sum(drr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(drr, D_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(drr, D_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(drr, D_SIZE) << endl;
	ShiftLeft(drr, D_SIZE);
	Print(drr, D_SIZE);
	ShiftRight(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	const int E_SIZE = 15;
	char err[E_SIZE];
	FillRand(err, E_SIZE);
	Print(err, E_SIZE);
	Sort(err, E_SIZE);
	Print(err, E_SIZE);
	cout << "Сумма всех элементов: " << Sum(err, E_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(err, E_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(err, E_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(err, E_SIZE) << endl;
	ShiftLeft(err, E_SIZE);
	Print(err, E_SIZE);
	ShiftRight(err, E_SIZE);
	Print(err, E_SIZE);
#endif // Home_Work

	/////////////////////////////////////////////////////////////

	const int ROWS = 3;
	const int COLS = 8;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}