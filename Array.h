#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Цей модуль зберігає функції для встановлення положення масивів

// Початкове положення для трьохвимірних масивів

// Впорядкований
void Ordered_Array(int ***A, int P, int M, int N);

// Випадковий
void Random_Array(int ***A, int P, int M, int N);

// Обернено впорядкований
void Backordered_Array(int ***A, int P, int M, int N);

// Початкове положення для векторів

// Впорядкований
void Ordered_Vector(int *A, int N);

// Випадковий
void Random_Vector(int *A, int N);

// Обернено впорядкований
void Backordered_Vector(int *A, int N);

#endif // ARRAY_H_INCLUDED
