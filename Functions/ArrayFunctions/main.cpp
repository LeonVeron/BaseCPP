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
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Arr, n) << endl;
	cout << "����������� ��������: " << minValueIn(Arr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////

	const int m = 10;
	double Brr[m];
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);

	cout << "����� ��������� �������: " << Sum(Brr, m) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Brr, m) << endl;
	cout << "����������� ��������: " << minValueIn(Brr, m) << endl;
	cout << "������������ ��������: " << maxValueIn(Brr, m) << endl;

	//////////////////////////////////////////////////////////////

	const int l = 8;
	char Crr[l];
	FillRand(Crr, l);
	Print(Crr, l);
	Sort(Crr, l);
	Print(Crr, l);

	//////////////////////////////////////////////////////////////

	cout << "��������� �������" << endl;
	
	int Drr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(Drr, ROWS, COLS) << endl;
	cout<< "������� �������������� ��������� �������: " << Avg(Drr, ROWS,COLS) << endl;
	cout << "����������� ��������: " << minValueIn(Drr, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(Drr, ROWS, COLS) << endl;
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);

}





