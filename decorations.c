#include "decorations.h"

void frame (int x1, int y1, int x2, int y2)
// Будує рамку з вказаними координатами сторін
 {

int i;

gotoxy(x1,y1);  printf("-");

for (i= x1+1; i <= x2-1; i++)
{
    gotoxy(i,y1); printf("|");
    gotoxy(i,y2); printf("|");
}

for (i=(y1+1); i<=(y2-1); i++)
{
    gotoxy(x1,i); printf("-");
    gotoxy(x2,i); printf("-");
}

gotoxy(x2,y1);  printf("-");
gotoxy(x1,y2);  printf("-");
gotoxy(x2,y2);  printf("-");


 }

 int zastavka ()
 // Головне меню
 {
int ch;

system ("cls");
frame(3, 3, 23, 110);
frame(4, 4, 22, 109);
gotoxy(8,45); printf("Курсова робота з СДА");
gotoxy(10,50); printf("Варiант 62");
gotoxy(9,45); printf("Кукси Кирила, КВ-21");
gotoxy(14,40); printf("0 - Вивести таблицю з першого дослiдження");
gotoxy(15,40); printf("1 - Вивести таблицю з другого дослiдження");
gotoxy(16,40); printf("2 - Вивести таблицю з третього дослiдження");
gotoxy(17,40); printf("3 - Вивести всi таблицi");
gotoxy(18,40); printf("4 - Вихiд з программи");
gotoxy(19,45); printf("Введiть число: "); scanf("%d", &ch); // Вибір користувача

return ch;
}

int punct_1 ()
 // Перше підменю
{
int ch;

system ("cls");
frame(3, 3, 29, 110);
frame(4, 4, 28, 109);
gotoxy(8,48); printf("Першие дослiдження");
gotoxy(9,50); printf("P = 3, N = 4096");
gotoxy(10,45); printf("M змiнюється вiд 1 до 512");
gotoxy(12,42); printf("0 - Зробити таблицю для M = 1");
gotoxy(13,42); printf("1 - Зробити таблицю для M = 2");
gotoxy(14,42); printf("2 - Зробити таблицю для M = 4");
gotoxy(15,42); printf("3 - Зробити таблицю для M = 8");
gotoxy(16,42); printf("4 - Зробити таблицю для M = 16");
gotoxy(17,42); printf("5 - Зробити таблицю для M = 32");
gotoxy(18,42); printf("6 - Зробити таблицю для M = 64");
gotoxy(19,42); printf("7 - Зробити таблицю для M = 128");
gotoxy(20,42); printf("8 - Зробити таблицю для M = 256");
gotoxy(21,42); printf("9 - Зробити таблицю для M = 512");
gotoxy(22,42); printf("10 - Зробити таблицi для всiх M");
gotoxy(23,42); printf("11 - Вийти в меню");
gotoxy(25,45); printf("Введiть число: "); scanf("%d", &ch); // Вибір користувача

return ch;
}

int punct_2 ()
// Друге підменю
{
int ch;

system ("cls");
frame(3, 3, 30, 110);
frame(4, 4, 29, 109);
gotoxy(8,50); printf("Друге дослiдження");
gotoxy(9,50); printf("P = 3, M*N = 90000");
gotoxy(10,45); printf("N змiнюється вiд 1 до 90000");
gotoxy(12,40); printf("0 - Зробити таблицю для N = 1, M = 90000");
gotoxy(13,40); printf("1 - Зробити таблицю для N = 2, M = 45000");
gotoxy(14,40); printf("2 - Зробити таблицю для N = 4, M = 22500");
gotoxy(15,40); printf("3 - Зробити таблицю для N = 10, M = 9000");
gotoxy(16,40); printf("4 - Зробити таблицю для N = 100, M = 900");
gotoxy(17,40); printf("5 - Зробити таблицю для N = 300, M = 300");
gotoxy(18,40); printf("6 - Зробити таблицю для N = 900, M = 100");
gotoxy(19,40); printf("7 - Зробити таблицю для N = 9000, M = 10");
gotoxy(20,40); printf("8 - Зробити таблицю для N = 22500, M = 4");
gotoxy(21,40); printf("9 - Зробити таблицю для N = 45000, M = 2");
gotoxy(22,40); printf("10 - Зробити таблицю для N = 90000, M = 1");
gotoxy(23,40); printf("11 - Зробити таблицю для всiх випадкiв");
gotoxy(24,40); printf("12 - Вийти в меню");
gotoxy(26,45); printf("Введiть число: "); scanf("%d", &ch); // Вибір користувача

return ch;
}

int punct_3 ()
// Третє підменю
{
int ch;

system ("cls");
frame(3, 3, 30, 110);
frame(4, 4, 29, 109);
gotoxy(8,50); printf("Третє дослiдження");
gotoxy(9,50); printf("M = 100, N*P = 16900");
gotoxy(10,45); printf("N змiнюється вiд 1 до 16900 ");
gotoxy(12,40); printf("0 - Зробити таблицю для N = 1, P = 16900");
gotoxy(13,40); printf("1 - Зробити таблицю для N = 2, P = 8450");
gotoxy(14,40); printf("2 - Зробити таблицю для N = 4, P = 4225");
gotoxy(15,40); printf("3 - Зробити таблицю для N = 10, P = 1690");
gotoxy(16,40); printf("4 - Зробити таблицю для N = 100, P = 169");
gotoxy(17,40); printf("5 - Зробити таблицю для N = 130, P = 130");
gotoxy(18,40); printf("6 - Зробити таблицю для N = 169, P = 100");
gotoxy(19,40); printf("7 - Зробити таблицю для N = 1690, P = 10");
gotoxy(20,40); printf("8 - Зробити таблицю для N = 4225, P = 4");
gotoxy(21,40); printf("9 - Зробити таблицю для N = 8450, P = 2");
gotoxy(22,40); printf("10 - Зробити таблицю для N = 16900, P = 1");
gotoxy(23,40); printf("11 - Зробити таблицю для всiх варiантiв");
gotoxy(24,40); printf("12 - Вийти в меню");
gotoxy(26,45); printf("Введiть число: "); scanf("%d", &ch); // Вибір користувача

return ch;
}

void gotoxy (int row, int col)
// Встановлює курсор в потрібне місце
{
       printf("\033[%d;%dH", row, col);
}
