#include "Sorter.h"
#include "General_data.h"


float Sorting_time_array()
{
    long int Sum;
    float AverageValue;



    clock_t buf;
    // ³������� ����� rejected_number ��������
	int L = rejected_number, R = measurements_number - 1;
	// ��� ������ �������� ���������� �������
	int k = rejected_number;
	for (int j=0; j < min_max_number; j++) {
		for (int i = L; i < R; i++)	{
			if (Res[i] > Res[i + 1]) {
				buf = Res[i];
				Res[i] = Res[i + 1];
				Res[i + 1] = buf;
				k = i;
			}
		}
		R = k;
		for (int i = R - 1; i >= L; i--) {
			if (Res[i] > Res[i + 1]) {
				buf = Res[i];
				Res[i] = Res[i + 1];
				Res[i + 1] = buf;
				k = i;
			}
		}
		L = k + 1;
	}


  Sum=0;

  //³������� �� ���� min_max_number ������������ � ��������� ��������
    for (int i = rejected_number + min_max_number; i < measurements_number - min_max_number; i++)
       Sum = Sum + Res[i];

   // �������� ������ �������� ��������, �� ����������
    AverageValue = (float)Sum/(float)(measurements_number - 2*min_max_number - rejected_number);


// � ��� ������ � ����� �� �������� �������� �����
// �� �������� � ������� ��ǲ.
    printf("");
/////////////////////////////////////////////////////////////

    return AverageValue;

}
