#ifndef MEASUREMENT_H_INCLUDED
#define MEASUREMENT_H_INCLUDED


#include <time.h>

// ��� ������ ������ �������, �� ������� �������� ��� ��� ���������� ������ ������

//�������� ����� ������� ��������� ��� ������ �[P, M, N]
void OutTable(int ***A, int P, int M, int N);

//�������� ����� ������� ��������� ��� ������� �[P,N], ������ ����������� �� P
void OutTable_For_Vector(int *A, int P, int N);
#endif // MEASUREMENT_H_INCLUDED
