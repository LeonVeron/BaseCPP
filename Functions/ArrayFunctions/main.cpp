#include<iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(char Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(char Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[], const int n);
void Sort(double Arr[], const int n);
void Sort(char Arr[], const int n);

int Sum(int Arr[], const int n);
double Sum(double Arr[], const int n);
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n);
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int Arr[], const int n);
double minValueIn(double Arr[], const int n);
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int Arr[], const int n);
double maxValueIn(double Arr[], const int n);
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];

	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);
	cout << "Сумма элементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(Arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(Arr, n) << endl;
	cout << "максимальное значение: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////

	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);

	cout << "Сумма элементов массива: " << Sum(Brr, m) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(Brr, m) << endl;
	cout << "Минимальное значение: " << minValueIn(Brr, m) << endl;
	cout << "максимальное значение: " << maxValueIn(Brr, m) << endl;

	//////////////////////////////////////////////////////////////

	const int l = 8;
	char Crr[l];
	FillRand(Crr, l);
	Print(Crr, l);
	Sort(Crr, l);
	Print(Crr, l);

	//////////////////////////////////////////////////////////////

	cout << "Двумерные массивы" << endl;
	
	int Drr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(Drr, ROWS, COLS) << endl;
	cout<< "Среднее арифметическое элементов массива: " << Avg(Drr, ROWS,COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(Drr, ROWS, COLS) << endl;
	cout << "максимальное значение: " << maxValueIn(Drr, ROWS, COLS) << endl;

}
void FillRand(int Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void FillRand(double Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}

void FillRand(char Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
		cout << endl;
	}
}

void Print(int Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(double Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(char Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Вывод массива на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sort(int Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

void Sort(double Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

void Sort(char Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				char buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}

double Sum(double Arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

int Sum(int Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

double Avg(int Arr[], const int n)
{
	 return (double)Sum(Arr, n)/n;
}

double Avg(double Arr[], const int n)
{
	return Sum(Arr, n) / n;
}

double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS*COLS);
}

int minValueIn(int Arr[], const int n)
{
	int minValueIn = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i]<minValueIn) minValueIn=Arr[i];
	}
	return minValueIn;
}

double minValueIn(double Arr[], const int n)
{
	double minValueIn = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < minValueIn) minValueIn = Arr[i];
	}
	return minValueIn;
}

int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < minValueIn) minValueIn = Arr[i][j];
		}
	}
	return minValueIn;
}

int maxValueIn(int Arr[], const int n)
{
	int maxValueIn = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > maxValueIn) maxValueIn = Arr[i];
	}
	return maxValueIn;
}

double maxValueIn(double Arr[], const int n)
{
	double maxValueIn = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > maxValueIn) maxValueIn = Arr[i];
	}
	return maxValueIn;
}

int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValueIn = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > maxValueIn) maxValueIn = Arr[i][j];
		}
	}
	return maxValueIn;
}