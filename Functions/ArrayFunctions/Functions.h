#pragma once
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
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);

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
