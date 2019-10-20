#include "Functions.h"

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
	return (double)Sum(Arr, n) / n;
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
		if (Arr[i] < minValueIn) minValueIn = Arr[i];
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