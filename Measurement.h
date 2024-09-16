#ifndef MEASUREMENT_H_INCLUDED
#define MEASUREMENT_H_INCLUDED


#include <time.h>

// Цей модуль містить функції, що повністю виводять дані про сортування певних масивів

//Виводить повну таблицю вимірювань для масива А[P, M, N]
void OutTable(int ***A, int P, int M, int N);

//Виводить повну таблицю вимірювань для вектора А[P,N], умовно помноженого на P
void OutTable_For_Vector(int *A, int P, int N);
#endif // MEASUREMENT_H_INCLUDED
