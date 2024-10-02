#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "RUS");
    double gr;
    puts("Введите градусную меру угла");
    scanf("%lf", &gr);
    printf("Радиан в %.2lf градусах: %.6lf", gr, sin(gr * M_PI / 180));
}