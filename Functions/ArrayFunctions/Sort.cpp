#include "Functions.h"

void Sort(int Arr[], const int n)
{
	//����������:
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
	//����������:
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
	//����������:
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

void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
					//���� ������������ ������� ������, ��� ��������� �� ����� �������� �������
					if (Arr[k][l] < Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iteration++;
				}
			}

		}
	}
	cout << "������ ������������ �� " << iteration << " ��������" << endl;
}