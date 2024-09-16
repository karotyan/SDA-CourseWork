#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ��� ������ ������ ������� ��� ������������ ��������� ������

// ��������� ��������� ��� ������������ ������

// �������������
void Ordered_Array(int ***A, int P, int M, int N);

// ����������
void Random_Array(int ***A, int P, int M, int N);

// �������� �������������
void Backordered_Array(int ***A, int P, int M, int N);

// ��������� ��������� ��� �������

// �������������
void Ordered_Vector(int *A, int N);

// ����������
void Random_Vector(int *A, int N);

// �������� �������������
void Backordered_Vector(int *A, int N);

#endif // ARRAY_H_INCLUDED
