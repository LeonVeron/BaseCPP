#include "Functions.h"

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





