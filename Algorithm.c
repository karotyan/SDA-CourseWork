#include "Algorithm.h"

// Сортування трьохвимірних масивів
clock_t Exchange3(int ***A, int P, int M, int N)
{
 int R, k, slice, j, i;
 int tmp;
 clock_t time_start, time_stop;
 time_start = clock();//
 for (slice = 0; slice < P; slice++)
// Йдемо по кожному перерізу
    {


    R=N-1;
    while(R>0){
    k=0;
    for(i=0; i<R; i++)
    if(A[slice][0][i] > A[slice][0][i+1])
    {

    for(j = 0; j < M; j++)
    {
        tmp = A[slice][j][i];
        A[slice][j][i] = A[slice][j][i+1];
        A[slice][j][i+1] = tmp;

    }
    k=i;
    }
    R=k;
    }

}
time_stop = clock();//
 return time_stop - time_start;
}

clock_t Shell_1(int ***A, int P, int M, int N)
{
 int t, j, k, slices, i, p, m;
 int Elem_row[M];


int steps = (int)log2f((float)N)-1;
 if (steps < 1) steps = 1;
 int Stages[steps];

 clock_t time_start, time_stop;
 time_start = clock();
 if (N<4) t=1;
 else t=(int)log2f((float)N)-1;

 Stages[t-1]=1;
 for (int i=t-2; i>=0; i--)
 Stages[i]=2*Stages[i+1]+1;

 for(slices = 0; slices < P; slices++)
 {


 for (p=0; p<t; p++){
 k=Stages[p];
 for (i=k; i<N; i++){

 for(m = 0; m < M; m++)
    Elem_row[m] = A[slices][m][i];

 j=i;
 while (j>=k && Elem_row[0]<A[slices][0][j-k]) {
     for(m = 0; m < M; m++)
    A[slices][m][j]=A[slices][m][j-k];
    j=j-k;
 }
 for(m = 0; m < M; m++)
 A[slices][m][j]=Elem_row[m];
 }
 }

  }
 time_stop = clock();
 return time_stop - time_start;
}

void QuickSort(int ***A, int L, int R, int slice, int M)
{
 int B, tmp, i, j, k;
 B=A[slice][0][(L+R)/2];
 i=L; j=R;
 while (i<=j) {
 while (A[slice][0][i] < B) i=i+1;
 while (A[slice][0][j] > B) j=j-1;
 if (i<=j) {
 for(k = 0; k < M; k++)
 {
 tmp=A[slice][k][i];
 A[slice][k][i]=A[slice][k][j];
 A[slice][k][j]=tmp;
 }
 i=i+1;
 j=j-1;


 }
 }
 if (L<j) QuickSort(A, L, j, slice, M );
 if (i<R) QuickSort(A, i, R, slice, M);
}

clock_t QuickSortMeasurement(int ***A, int P, int M, int N)
{
 clock_t time_start, time_stop;
 int slice;

 //FillVector(Vector, VectorLength);
 time_start = clock();
 for (slice = 0; slice < P; slice++)
 QuickSort(A, 0, N-1, slice, M);
 time_stop = clock();
 return time_stop - time_start;
 }



// Сортування векторів
clock_t Exchange3_vector(int *A, int N)
{
 int R, k, tmp, i;
 clock_t time_start, time_stop;
 time_start = clock();
 R=N-1;
 while(R>0){
 k=0;
 for(i=0; i<R; i++)
 if (A[i]>A[i+1]) {
 tmp=A[i];
 A[i]=A[i+1];
A[i+1]=tmp;
 k=i;
 }
 R=k;
 }
 time_stop = clock();
 return time_stop - time_start;
}

clock_t Shell_1_vector(int *A, int N)
{
 int Elem, t, j, k;
 clock_t time_start, time_stop;
 int steps = (int)log2f((float)N)-1;
 if (steps < 1) steps = 1;
 int Stages[steps];
 time_start = clock();
 if (N<4) t=1;
 else t=(int)log2f((float)N)-1;
 Stages[t-1]=1;
 for (int i=t-2; i>=0; i--)
 Stages[i]=2*Stages[i+1]+1;
 for (int p=0; p<t; p++){
 k=Stages[p];
 for (int i=k; i<N; i++){
 Elem=A[i];
 j=i;
 while (j>=k && Elem<A[j-k]) {
 A[j]=A[j-k];
 j=j-k;
 }
 A[j]=Elem;
 }
 }
 time_stop = clock();
 return time_stop - time_start;
}

void QuickSort_vector(int *Vector, int L, int R)
{
 int B, tmp, i, j;
 B=Vector[(L+R)/2];
 i=L; j=R;
 while (i<=j) {
 while (Vector[i] < B) i=i+1;
 while (Vector[j] > B) j=j-1;
 if (i<=j) {
 tmp=Vector[i];
 Vector[i]=Vector[j];
 Vector[j]=tmp;
 i=i+1;
 j=j-1;
 }
 }
 if (L<j) QuickSort_vector(Vector, L, j);
 if (i<R) QuickSort_vector(Vector, i, R);
}

clock_t QuickSortMeasurement_vector(int *A, int N)
{
 clock_t time_start, time_stop;
 time_start = clock();
 QuickSort_vector(A, 0, N-1);
 time_stop = clock();
 return time_stop - time_start;
 }




