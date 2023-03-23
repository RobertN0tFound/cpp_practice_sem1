//Вычислить сумму элементов массива, расположенных после наименьшего отрицательного элемента. (Ввод количества элементов массива и сами элементы осуществить с клавиатуры)
#include <iostream>
#include <stdio.h>

int main()
{
    int a[30];
    int min;
    int min_i = 0;
    int n, i;
    int sum = 0;

    setlocale(LC_ALL, "Russian");
    printf("\nВведите длину массива >> ");
    scanf_s("%d", &n);
    if (n > 30 || n < 1)
    {
        printf("\nERROR");
    }
    for (i = 0; i < n; i++)
    {
        printf("\nВведите значение элемента a[%d] >> ", i);
        scanf_s("%d", &a[i]);
        if (min_i > a[i])
        {
            min_i = i;
        }
    }
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i]) min = a[i];
    }
    for (i = min_i + 1; i < n; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);
}