#include <stdio.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
m1:
    double x, y;
    printf("Введите координату x > ");
    scanf_s("%lf", &x);
    printf("Введите координату y > ");
    scanf_s("%lf", &y);
    printf("x = %6.3lf; y = %6.3lf\n", x, y);
    if ((y <= 1) && (y >= -1) && ((x + 1.5 / 1.5) == (y - 1 / -1)) || ((x - 0 / -1.5) == (y - 0 / -1)) || ((x - 0 / 2) == (y - 1 / -1)) || ((x - 2 / -3) == (y - 0 / -1)))
        printf("Точка попадает в область\n");
    else
        printf("Точка не попадает в область\n");
    goto m1;
    return 0;
}