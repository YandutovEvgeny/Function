#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(short arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(short arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
short Sum(short arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(short arr[], const int n);
double Avg(float arr[], const int n);
double Avg(char arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
short minValueIn(short arr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
short maxValueIn(short arr[], const int n);
float maxValueIn(float arr[], const int n);
char maxValueIn(char arr[], const int n);

void ShiftLeft(int arr[], const int n);
void ShiftLeft(double arr[], const int n);
void ShiftLeft(short arr[], const int n);
void ShiftLeft(float arr[], const int n);
void ShiftLeft(char arr[], const int n);

void ShiftRight(int arr[], const int n);
void ShiftRight(double arr[], const int n);
void ShiftRight(short arr[], const int n);
void ShiftRight(float arr[], const int n);
void ShiftRight(char arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Rus");
	
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
}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
}void FillRand(char arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255);
	}
}

void Print(int arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(short arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}


void Sort(int arr[], const int n)
{
	//Сортировка 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	//Сортировка 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(short arr[], const int n)
{
	//Сортировка 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)
{
	//Сортировка 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}void Sort(char arr[], const int n)
{
	//Сортировка 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	//Сумма всех элементов
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}	
	return sum;
}

double Sum(double arr[], const int n)
{
	//Сумма всех элементов
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

short Sum(short arr[], const int n)
{
	//Сумма всех элементов
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int n)
{
	//Сумма всех элементов
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(char arr[], const int n)
{
	//Сумма всех элементов
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}

double Avg(short arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}

double Avg(float arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	//Минимальное значение в массиве
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	//Минимальное значение в массиве
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}	
	return min;
}

short minValueIn(short arr[], const int n)
{
	//Минимальное значение в массиве
	short min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}	
	return min;
}

float minValueIn(float arr[], const int n)
{
	//Минимальное значение в массиве
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}	
	return min;
}

char minValueIn(char arr[], const int n)
{
	//Минимальное значение в массиве
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}	
	return min;
}

int maxValueIn(int arr[], const int n)
{
	//Максимальное значение в массиве
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}	
	return max;
}

double maxValueIn(double arr[], const int n)
{
	//Максимальное значение в массиве
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}	
	return max;
}

short maxValueIn(short arr[], const int n)
{
	//Максимальное значение в массиве
	short max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}	
	return max;
}

float maxValueIn(float arr[], const int n)
{
	//Максимальное значение в массиве
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}	
	return max;
}

char maxValueIn(char arr[], const int n)
{
	//Максимальное значение в массиве
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}	
	return max;
}

void ShiftLeft(int arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(double arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(short arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		short buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(float arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(char arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(int arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(double arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(short arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		short buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(float arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		float buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(char arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}