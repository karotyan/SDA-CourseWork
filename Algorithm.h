#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED


#include <time.h>
#include <math.h>

// ������ ������ �� ������ ���������� ���������� ��� ��� ������

// ���������� ������������ ������

// ����� ������� ����� 3 �� �����'����������� ���������� ���� �����
// ������� ��� ����������
clock_t Exchange3(int ***A, int P, int M, int N);

// ����� ���������� ����� 1, ������� ��� ����������
clock_t Shell_1(int ***A, int P, int M, int N);

// ���������� ������� �������� ����������
void QuickSort(int ***A, int L, int R, int slice, int M);

// ������������ �������, ��� ������� ������ ���������� � ������ ���
clock_t QuickSortMeasurement(int ***A, int P, int M, int N);



// ���������� �������

// ����� ������� ����� 3 �� �����'����������� ���������� ���� �����
// ������� ��� ����������
clock_t Exchange3_vector(int *A, int N);

// ����� ���������� ����� 1, ������� ��� ����������
clock_t Shell_1_vector(int *A, int N);

// ���������� ������� �������� ����������
void QuickSort_vector(int *A, int L, int R);

// ������������ �������, ��� ������� ������ ���������� � ������ ���
clock_t QuickSortMeasurement_vector(int *A, int N);


#endif // ALGORITHM_H_INCLUDED
