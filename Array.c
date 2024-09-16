#include "Array.h"


// Початкове положення для трьохвимірних масивів, реалізація функцій
void Ordered_Array(int ***A, int P, int M, int N)
{
    for(int k = 0; k < P; k++)
        for(int j = 0; j < M; j++)
            for(int i = 0; i < N; i++)
                A[k][j][i] = i;
}


void Random_Array(int ***A, int P, int M, int N)
{
    srand(time(NULL));
    for(int k = 0; k < P; k++)
        for(int j = 0; j < M; j++)
            for(int i = 0; i < N; i++)
                A[k][j][i] = rand()%(2*N);
}


void Backordered_Array(int ***A, int P, int M, int N)
{
    for(int k = 0; k < P; k++)
        for(int j = 0; j < M; j++)
            for(int i = 0; i < N; i++)
                A[k][j][i] = N-1-i;
}

// Початкове положення для векторів, реалізація функцій

void Ordered_Vector(int *A, int N)
{
    for(int i = 0; i < N; i++)
        A[i] = i;
}

void Random_Vector(int *A, int N)
{
    srand(time(NULL));
    for(int i = 0; i < N; i++)
        A[i] = rand()%(2*N);
}

void Backordered_Vector(int *A, int N)
{
    for(int i = 0; i < N; i++)
        A[i] = N-1-i;
}
