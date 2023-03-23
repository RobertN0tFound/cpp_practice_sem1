#include <iostream>
#include <stdio.h>

int main()
{
    int a[20];
    int cnt = 0;
    int n, i;

    setlocale(LC_ALL, "Russian");
    printf("\nВведите длину массива >> ");
    scanf_s("%d", &n);
    if (n > 20 || n < 5)
    {
        printf("\nERROR");
    }
    for (i = 0; i < n; i++)
    {
    a1:printf("\nВведите значение элемента a[%d] >> ", i);
        scanf_s("%d", &a[i]);
        if (a[i] > 50)
        {
            printf("\nЧисло не входит в диапазон допустимых значений (-50 - 50)");
            goto a1;
        }
        if (a[i] < -50)
        {
            printf("\nЧисло не входит в диапазон допустимых значений (-50 - 50)");
            goto a1;
        }
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}