#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "RUS");
    double gr;
    puts("������� ��������� ���� ����");
    scanf("%lf", &gr);
    printf("������ � %.2lf ��������: %.6lf", gr, sin(gr * M_PI / 180));
}