
#include "Algorithm.h"
#include "Array.h"
#include "General_data.h"
#include "Sorter.h"
#include "Measurement.h"


float fill_time_vector(clock_t (*sorting_func)(int*** , int, int, int), void (*array_func)(int*** , int, int, int), int*** A, int P, int M, int N)
//Повністю заповнює масив вказаними функціями sorting_func і array_func
//таку кількість раз, щоб заповнити масив вимірювань Res[measurements_number],
//сортує його і повертає значення
{

    for (int i = 0; i < measurements_number; i++)
    {
        array_func(A, P, M, N);
        Res[i] = sorting_func(A, P, M, N);
    }

    return Sorting_time_array();
}

float fill_time_vector_forvector(clock_t (*sorting_func)(int* , int), void (*array_func)(int* , int), int* A, int N)
//Повністю заповнює і сортує вектор вказаними функціями orting_func і array_func
//таку кількість раз, щоб заповнити масив вимірювань Res[measurements_number],
//сортує його і повертає значення
{

    for (int i = 0; i < measurements_number; i++)
    {
        array_func(A, N);
        Res[i] = sorting_func(A, N);
    }
    return Sorting_time_array();
}

void OutTable(int ***A, int P, int M, int N)
// Таблиця всіх випадків початового положення елементів масива та всіх алгоритмів сортування
{
    float ordered, random, backordered;
    printf("Table for array A[P,M,N], where P = %d, M = %d, N = %d\n", P, M, N);
    printf("-----------------------------------------------------------------------\n");
    printf("|\t\t|\t   Ordered |\t    Random |\t  BackOrdered | \n");

    ordered = fill_time_vector(Exchange3, Ordered_Array, A, P, M, N);
    random = fill_time_vector(Exchange3, Random_Array, A, P, M, N);
    backordered = fill_time_vector(Exchange3, Backordered_Array, A, P, M, N);

    printf("|Exchange\t|\t %9.2f |\t %9.2f |\t    %9.2f | \n", ordered, random, backordered);

   printf("-----------------------------------------------------------------------\n");

    ordered = fill_time_vector(Shell_1, Ordered_Array, A, P, M, N);
    random = fill_time_vector(Shell_1, Random_Array, A, P, M, N);
    backordered = fill_time_vector(Shell_1, Backordered_Array, A, P, M, N);

    printf("|Shell\t\t|\t %9.2f |\t %9.2f |\t    %9.2f | \n", ordered, random, backordered);

    printf("-----------------------------------------------------------------------\n");

    ordered = fill_time_vector(QuickSortMeasurement, Ordered_Array, A, P, M, N);
    random = fill_time_vector(QuickSortMeasurement, Random_Array, A, P, M, N);
    backordered = fill_time_vector(QuickSortMeasurement, Backordered_Array, A, P, M, N);

    printf("|Quicksort\t|\t %9.2f |\t %9.2f |\t    %9.2f | \n", ordered, random, backordered);
    printf("-----------------------------------------------------------------------\n");
    printf("\n\n");
}

void OutTable_For_Vector(int *A, int P, int N)
// Таблиця всіх випадків початового положення елементів вектора та всіх алгоритмів сортування
{
    float ordered, random, backordered;
    printf("Table for Vector A[N] sorted P times, where P = %d,  N = %d\n", P, N);
    printf("-----------------------------------------------------------------------\n");
    printf("|\t\t|\t   Ordered |\t    Random |\t  BackOrdered | \n");

    ordered = P * fill_time_vector_forvector(Exchange3_vector, Ordered_Vector, A, N);
    random = P * fill_time_vector_forvector(Exchange3_vector, Random_Vector, A, N);
    backordered = P * fill_time_vector_forvector(Exchange3_vector, Backordered_Vector, A, N);
    printf("|Exchange\t|\t %9.2f |\t %9.2f |\t    %9.2f | \n", ordered, random, backordered);

   printf("-----------------------------------------------------------------------\n");

    ordered = P * fill_time_vector_forvector(Shell_1_vector, Ordered_Vector, A, N);
    random = P * fill_time_vector_forvector(Shell_1_vector, Random_Vector, A, N);
    backordered = P * fill_time_vector_forvector(Shell_1_vector, Backordered_Vector, A, N);

    printf("|Shell\t\t|\t %9.2f |\t %9.2f |\t    %9.2f | \n", ordered, random, backordered);

    printf("-----------------------------------------------------------------------\n");

    ordered = P * fill_time_vector_forvector(QuickSortMeasurement_vector, Ordered_Vector, A, N);
    random = P * fill_time_vector_forvector(QuickSortMeasurement_vector, Random_Vector, A, N);
    backordered = P * fill_time_vector_forvector(QuickSortMeasurement_vector, Backordered_Vector, A, N);

    printf("|Quicksort\t|\t %9.2f |\t %9.2f |\t    %9.2f | \n", ordered, random, backordered);
    printf("-----------------------------------------------------------------------\n");
    printf("\n\n");
}

