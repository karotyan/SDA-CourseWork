#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED


#include <time.h>
#include <math.h>

// Модуль містить усі можливі алгоритими сортування для всіх масивів

// Сортування трьохвимірних масивів

// Метод прямого обміну 3 із запам'ятовуванням останнього місця обміну
// повертає час сортування
clock_t Exchange3(int ***A, int P, int M, int N);

// Метод сортування Шелла 1, повертає час сортування
clock_t Shell_1(int ***A, int P, int M, int N);

// Рекурсивна функція швидкого сортування
void QuickSort(int ***A, int L, int R, int slice, int M);

// Нерекурсивна функція, яка викликає швидке сортування і вимірює час
clock_t QuickSortMeasurement(int ***A, int P, int M, int N);



// Сортування векторів

// Метод прямого обміну 3 із запам'ятовуванням останнього місця обміну
// повертає час сортування
clock_t Exchange3_vector(int *A, int N);

// Метод сортування Шелла 1, повертає час сортування
clock_t Shell_1_vector(int *A, int N);

// Рекурсивна функція швидкого сортування
void QuickSort_vector(int *A, int L, int R);

// Нерекурсивна функція, яка викликає швидке сортування і вимірює час
clock_t QuickSortMeasurement_vector(int *A, int N);


#endif // ALGORITHM_H_INCLUDED
