#include"Functions.h"

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
	return (double)Sum(Arr, n) / n;
}

template<typename T>
T minValueIn(T Arr[], const int n)
{
	T minValueIn = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < minValueIn) minValueIn = Arr[i];
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
