#include"Functions.h"

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
	cout << "Массив отсортирован за " << iteration << " итераций" << endl;
}