#ifndef GENERAL_DATA_H_INCLUDED
#define GENERAL_DATA_H_INCLUDED

// Цей модуль містить масив вимірювань часу як спільну структуру даних
// для модулів "Measurement.c", якйий заповнює цей масив, і  "Sorter.c"
// Який його сортує і повертає середній час
// Також  визначає параметри для сортування

#include <time.h>

// Загальна кількість вимірів часу роботи алгоритма
#define measurements_number 28

// Кількість відкинутих початкових вимірів
#define rejected_number 2

// Кількість відкинутих вимірів з мінімільними значеннями.
// Вона ж дорівнює кількості відкинутих вимірів
// з максимальними значеннями.
#define min_max_number 3

// Масив значень часу роботи алгоритма
clock_t  Res[measurements_number];

#endif // GENERAL_DATA_H_INCLUDED
