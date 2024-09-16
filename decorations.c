#include "decorations.h"

void frame (int x1, int y1, int x2, int y2)
// ���� ����� � ��������� ������������ �����
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
 // ������� ����
 {
int ch;

system ("cls");
frame(3, 3, 23, 110);
frame(4, 4, 22, 109);
gotoxy(8,45); printf("������� ������ � ���");
gotoxy(10,50); printf("���i��� 62");
gotoxy(9,45); printf("����� ������, ��-21");
gotoxy(14,40); printf("0 - ������� ������� � ������� ����i������");
gotoxy(15,40); printf("1 - ������� ������� � ������� ����i������");
gotoxy(16,40); printf("2 - ������� ������� � �������� ����i������");
gotoxy(17,40); printf("3 - ������� ��i ������i");
gotoxy(18,40); printf("4 - ���i� � ���������");
gotoxy(19,45); printf("����i�� �����: "); scanf("%d", &ch); // ���� �����������

return ch;
}

int punct_1 ()
 // ����� ������
{
int ch;

system ("cls");
frame(3, 3, 29, 110);
frame(4, 4, 28, 109);
gotoxy(8,48); printf("������ ����i������");
gotoxy(9,50); printf("P = 3, N = 4096");
gotoxy(10,45); printf("M ��i������� �i� 1 �� 512");
gotoxy(12,42); printf("0 - ������� ������� ��� M = 1");
gotoxy(13,42); printf("1 - ������� ������� ��� M = 2");
gotoxy(14,42); printf("2 - ������� ������� ��� M = 4");
gotoxy(15,42); printf("3 - ������� ������� ��� M = 8");
gotoxy(16,42); printf("4 - ������� ������� ��� M = 16");
gotoxy(17,42); printf("5 - ������� ������� ��� M = 32");
gotoxy(18,42); printf("6 - ������� ������� ��� M = 64");
gotoxy(19,42); printf("7 - ������� ������� ��� M = 128");
gotoxy(20,42); printf("8 - ������� ������� ��� M = 256");
gotoxy(21,42); printf("9 - ������� ������� ��� M = 512");
gotoxy(22,42); printf("10 - ������� ������i ��� ��i� M");
gotoxy(23,42); printf("11 - ����� � ����");
gotoxy(25,45); printf("����i�� �����: "); scanf("%d", &ch); // ���� �����������

return ch;
}

int punct_2 ()
// ����� ������
{
int ch;

system ("cls");
frame(3, 3, 30, 110);
frame(4, 4, 29, 109);
gotoxy(8,50); printf("����� ����i������");
gotoxy(9,50); printf("P = 3, M*N = 90000");
gotoxy(10,45); printf("N ��i������� �i� 1 �� 90000");
gotoxy(12,40); printf("0 - ������� ������� ��� N = 1, M = 90000");
gotoxy(13,40); printf("1 - ������� ������� ��� N = 2, M = 45000");
gotoxy(14,40); printf("2 - ������� ������� ��� N = 4, M = 22500");
gotoxy(15,40); printf("3 - ������� ������� ��� N = 10, M = 9000");
gotoxy(16,40); printf("4 - ������� ������� ��� N = 100, M = 900");
gotoxy(17,40); printf("5 - ������� ������� ��� N = 300, M = 300");
gotoxy(18,40); printf("6 - ������� ������� ��� N = 900, M = 100");
gotoxy(19,40); printf("7 - ������� ������� ��� N = 9000, M = 10");
gotoxy(20,40); printf("8 - ������� ������� ��� N = 22500, M = 4");
gotoxy(21,40); printf("9 - ������� ������� ��� N = 45000, M = 2");
gotoxy(22,40); printf("10 - ������� ������� ��� N = 90000, M = 1");
gotoxy(23,40); printf("11 - ������� ������� ��� ��i� ������i�");
gotoxy(24,40); printf("12 - ����� � ����");
gotoxy(26,45); printf("����i�� �����: "); scanf("%d", &ch); // ���� �����������

return ch;
}

int punct_3 ()
// ���� ������
{
int ch;

system ("cls");
frame(3, 3, 30, 110);
frame(4, 4, 29, 109);
gotoxy(8,50); printf("���� ����i������");
gotoxy(9,50); printf("M = 100, N*P = 16900");
gotoxy(10,45); printf("N ��i������� �i� 1 �� 16900 ");
gotoxy(12,40); printf("0 - ������� ������� ��� N = 1, P = 16900");
gotoxy(13,40); printf("1 - ������� ������� ��� N = 2, P = 8450");
gotoxy(14,40); printf("2 - ������� ������� ��� N = 4, P = 4225");
gotoxy(15,40); printf("3 - ������� ������� ��� N = 10, P = 1690");
gotoxy(16,40); printf("4 - ������� ������� ��� N = 100, P = 169");
gotoxy(17,40); printf("5 - ������� ������� ��� N = 130, P = 130");
gotoxy(18,40); printf("6 - ������� ������� ��� N = 169, P = 100");
gotoxy(19,40); printf("7 - ������� ������� ��� N = 1690, P = 10");
gotoxy(20,40); printf("8 - ������� ������� ��� N = 4225, P = 4");
gotoxy(21,40); printf("9 - ������� ������� ��� N = 8450, P = 2");
gotoxy(22,40); printf("10 - ������� ������� ��� N = 16900, P = 1");
gotoxy(23,40); printf("11 - ������� ������� ��� ��i� ���i���i�");
gotoxy(24,40); printf("12 - ����� � ����");
gotoxy(26,45); printf("����i�� �����: "); scanf("%d", &ch); // ���� �����������

return ch;
}

void gotoxy (int row, int col)
// ���������� ������ � ������� ����
{
       printf("\033[%d;%dH", row, col);
}
