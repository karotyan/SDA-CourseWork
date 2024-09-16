#include "menu_puncts.h"
#include "Measurement.h"
#include "decorations.h"

#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>


//Масив значень M для 1 випадку
 int Arr_of_M1[M1_A] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

 //Масив значень N для 2 випадку
 int Arr_of_N2[N2_A] = {1, 2, 4, 10, 100, 300, 900, 9000, 22500, 45000, 90000};

 //Масив значень N для 3 випадку
 int Arr_of_N3[N3_A] = {1, 2, 4, 10, 100, 130, 169, 1690, 4225, 8450, 16900};

void menu()
{
// Підключення кирилиці
char *locale = setlocale(LC_ALL, "ukr");
int choice = -1;

//Головне меню вибору дослідження
do{
    switch (choice)
    {
        case 0:
        // Перше дослідження
             {
                int choice_2 = -1;
                char trash;
                do
               // меню вибору випадків масива
                {

                if(choice_2 >= 0 && choice_2 < 10)
                    // Вибір для 1 випадку
                {
                    system ("cls");

                    int N = N1, P = P1, M = Arr_of_M1[choice_2];



                create_sort_out(P, M, N);
                create_sort_out_vector(P, N);

                // Залишити результат на екрані до вводу
                scanf("%c", &trash);
                scanf("%c", &trash);

                }

                if (choice_2 == 10)
                    // Вибір для всіх випадків
                {
                    system ("cls");
                    int N = N1, P = P1, M, k;
                    for(k = 0; k < M1_A; k++)
                    {
                        M = Arr_of_M1[k];

                        if(k == 0)
                    //1 раз вивести вектор
                    {
                   create_sort_out_vector(P, N);
                    }

                        create_sort_out(P, M, N);



                if(k == M1_A - 1)
                {
                    // Залишити результат на екрані до вводу
                   scanf("%c", &trash);
                    scanf("%c", &trash);
                }


                    }


                }


            choice_2 = punct_1();


        }while(choice_2 != 11);



            break;}

        case 1:
            // Друге дослідження
             {
                int choice_2 = -1;
                char trash;
                do
                // меню вибору випадків масива
                {

                if(choice_2 >= 0 && choice_2 < 11)
                    // Вибір для 1 випадку
                {
                    system ("cls");

                    int N = Arr_of_N2[choice_2], P = P2, M = Arr_of_N2[N2_A-choice_2-1];



                create_sort_out(P, M, N);

                // Залишити результат на екрані до вводу
                scanf("%c", &trash);
                scanf("%c", &trash);

                }

                if (choice_2 == 11)
                    // Вибір для всіх випадків
                {
                    system ("cls");
                    int P = P2, k, M, N;
                    for(k = 0; k < N2_A; k++)
                    {
                        N = Arr_of_N2[k];
                        M = Arr_of_N2[N2_A-k-1];


                        create_sort_out(P, M, N);



                    if(k == N2_A - 1)
                {
                    // Залишити результат на екрані до вводу
                    scanf("%c", &trash);
                    scanf("%c", &trash);
                }


                    }


                }

                choice_2 = punct_2();

                }while(choice_2 != 12);
                break;}

        case 2:
            // Третє дослідження
            {
                int choice_2 = -1;
                char trash;
                do
                // меню вибору випадків масива
                {

                if(choice_2 >= 0 && choice_2 < 11)
                    // Вибір для 1 випадку
                {
                    system ("cls");

                    int N, P, M = M3;
                    N = Arr_of_N3[choice_2];
                    P = Arr_of_N3[N3_A - choice_2 - 1];



                create_sort_out(P, M, N);

                // Залишити результат на екрані до вводу
                scanf("%c", &trash);
                scanf("%c", &trash);

                }

                if (choice_2 == 11)
                    // Вибір для всіх випадків
                {
                    system ("cls");
                    int N , P , M = M3, k;
                    for(k = 0; k < N3_A; k++)
                    {
                        N = Arr_of_N3[k];
                        P = Arr_of_N3[N3_A - k - 1];

                        create_sort_out(P, M, N);



                if(k == N3_A - 1)
                {
                    // Залишити результат на екрані до вводу
                   scanf("%c", &trash);
                    scanf("%c", &trash);
                }


                    }


                }


            choice_2 = punct_3();


        }while(choice_2 != 12);



            break;}

        case 3:
            // Вивід всіх маріантів всіх досліджень
            {
                char trash;
                // Перше дослідження
                 system ("cls");
                    int N = N1, P = P1, M, k;
                    for(k = 0; k < M1_A; k++)
                    {
                        M = Arr_of_M1[k];

                        if(k == 0)
                    //1 раз вивести вектор
                    {
                   create_sort_out_vector(P, N);
                    }

                        create_sort_out(P, M, N);




                    }
                // Друге дослідження
                P = P2;
                for(k = 0; k < N2_A; k++)
                    {
                        N = Arr_of_N2[k];
                        M = Arr_of_N2[N2_A-k-1];


                        create_sort_out(P, M, N);
                    }
                // Третє дослідження
                M = M3;
                for(k = 0; k < N3_A; k++)
                    {
                        N = Arr_of_N3[k];
                        P = Arr_of_N3[N3_A - k - 1];

                        create_sort_out(P, M, N);



                if(k == N3_A - 1)
                {
                    // Залишити результат на екрані до вводу
                    scanf("%c", &trash);
                    scanf("%c", &trash);
                }
                    }



                 break;}

        case 4: break;

        default: break;
    }
    choice = zastavka();

}while(choice != 4);

system ("cls");
}


void create_sort_out(int P, int M, int N)
// Створює динамічний масив, табичку з вимірюваннями та видаляє масив
{
                int ***Arr3D;
                Arr3D = (int***) malloc(P*sizeof(int**));
                for (int k=0; k<P; k++)
                { Arr3D[k] = (int**) malloc(M*sizeof(int*));
                for (int i=0; i<M; i++)
                Arr3D[k][i] = (int*) malloc(N*sizeof(int));
                }

                 OutTable(Arr3D,  P,  M,  N);

                for (int k=0; k<P; k++)
                { for (int i=0; i<M; i++)
                free(Arr3D[k][i]);
                free(Arr3D[k]);
                }
                free(Arr3D);

}

void create_sort_out_vector(int P,int N)
// Створює динамічний вектор, табичку з вимірюваннями та видаляє вектор
{
                    int * Vector;
                    Vector = (int*)malloc(N*sizeof(int));
                    OutTable_For_Vector(Vector,  P, N);
                    free(Vector);
}


