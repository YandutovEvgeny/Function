#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 3;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> //T = type
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
T minValueIn(T arr[], const int n);

template<typename T>
T maxValueIn(T arr[], const int n);

template<typename T>
void ShiftLeft(T arr[], const int n);

template<typename T>
void ShiftRight(T arr[], const int n);


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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000 / 100;
	}
}
void FillRand(double arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	}
}
void FillRand(short arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 10000) / 100;
	}
}
void FillRand(float arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100;
	}
}
void FillRand(char arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255);
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
void Sort(T arr[], const int n)
{
	//Сортировка 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
T Sum(T arr[], const int n)
{
	//Сумма всех элементов
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}	
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	//Минимальное значение в массиве
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template<typename T>
T maxValueIn(T arr[], const int n)
{
	//Максимальное значение в массиве
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}	
	return max;
}

template<typename T>
void ShiftLeft(T arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void ShiftRight(T arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
