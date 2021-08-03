#include"Statistics.h"
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