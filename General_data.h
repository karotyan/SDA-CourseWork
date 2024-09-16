#ifndef GENERAL_DATA_H_INCLUDED
#define GENERAL_DATA_H_INCLUDED

// ��� ������ ������ ����� ��������� ���� �� ������ ��������� �����
// ��� ������ "Measurement.c", ����� �������� ��� �����, �  "Sorter.c"
// ���� ���� ����� � ������� ������� ���
// �����  ������� ��������� ��� ����������

#include <time.h>

// �������� ������� ����� ���� ������ ���������
#define measurements_number 28

// ʳ������ ��������� ���������� �����
#define rejected_number 2

// ʳ������ ��������� ����� � ��������� ����������.
// ���� � ������� ������� ��������� �����
// � ������������� ����������.
#define min_max_number 3

// ����� ������� ���� ������ ���������
clock_t  Res[measurements_number];

#endif // GENERAL_DATA_H_INCLUDED
