#include<iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(char Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T Arr[], const int n);
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T Arr[], const int n);
template<typename T>void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>T Sum(T Arr[], const int n);
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> double Avg(T Arr[], const int n);
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T minValueIn(T Arr[], const int n);
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T maxValueIn(T Arr[], const int n);
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
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);

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

template<typename T>
void Print(T Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS)
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
template<typename T>
void Sort(T Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

template<typename T>
void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iteration = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				//int l = 0;
				/*if (k == i) l = j + 1;
				else l = 0;*/
				//int l = (k == i) ? j + 1:0;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//Если перебираемый элемент меньше, чем выбранный их нужно поменять местами
					if (Arr[k][l] < Arr[i][j])
					{
						T buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iteration++;
				}
			}
			
		}
	}
	cout << "Массив отсортирован за " << iteration << " итераций"<<endl;
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

template <typename T>
T Sum(T Arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

template<typename T>
double Avg(T Arr[], const int n)
{
	 return (double)Sum(Arr, n)/n;
}

double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS*COLS);
}

template<typename T>
T minValueIn(T Arr[], const int n)
{
	T minValueIn = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i]<minValueIn) minValueIn=Arr[i];
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

template<typename T>
T maxValueIn(T Arr[], const int n)
{
	T maxValueIn = Arr[0];
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