#include <math.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char a;
    double x, y, z, t, t1, t2, t3, t4, t5, t6, t7;
    printf("Input a > ");
    scanf_s("%c", &a);
    switch (a)
    {
    case '+':
    {
        printf("Input x, y, z > ");
        scanf_s("%lf%lf%lf", &x, &y, &z);
        if (x == 0 && y == 0 || z == 0) { printf("ERROR\n"); break; }
        t1 = 1 + pow(sin(x + y), 2);
        t2 = 2 * y / 1 + pow(x, 2) * pow(y, 2);
        t3 = fabs(x - t2);
        t4 = t1 / t3;
        t5 = t4 * pow(x, fabs(y));
        t6 = pow(cos(atan(1 / z)), 2);
        t7 = t5 + t6;
        printf("%f", t7); break;
    }
    case '-':
    {
        printf("Input x, y, z > ");
        scanf_s("%lf%lf%lf", &x, &y, &z);
        t1 = 1 + pow(sin(x + y), 2);
        t2 = 2 * y / 1 + pow(x, 2) * pow(y, 2);
        t3 = fabs(x - t2);
        t4 = t1 / t3;
        t5 = t4 * pow(x, fabs(y));
        t6 = pow(cos(atan(1 / z)), 2);
        t7 = t5 + t6;
        printf("%f", t7); break;
    }
    case '*': break;
    default: printf("Neverniy tip dannih\n"); break;
    }
}