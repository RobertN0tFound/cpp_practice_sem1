// Функция вывода начала таблицы
// Функция вывода завершения таблицы
// Функция вывода массива в середине таблицы

#include <stdio.h>
#include <iostream>

#define SIZE 3
#define STR_SIZE 20

void header(void)
{
    printf("\n|------------------------------------------------------------|");
    printf("\n|Характеристики ПЭВМ                                         |");
    printf("\n|------------------------------------------------------------|");
    printf("\n|Процессор           |Частота (МГц)       |ОЗУ (Мб)    |Тип  |");
}

void bottom(void)
{
    printf("\n|------------------------------------------------------------|");
    printf("\n|Тип: C - CISC-процессор, R - RISC-процессор                 |");
    printf("\n|____________________________________________________________|\n\n");
}

void middle(int* n, char s1[][STR_SIZE], char s2[][STR_SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n|--------------------|--------------------|------------|-----|");
        printf("\n|%-20s|%-20d|            |%-5s|", s1[i], n[i], s2[i]);
    }
}

void input(int* n, char s1[][STR_SIZE], char s2[][STR_SIZE])
{
    printf("\nТип: C - CISC-процессор, R - RISC-процессор");
    for (int i = 0; i < SIZE; )
    {
        printf("\nВведите %d значение для процессора, частоты (МГц) и типа >> ", i + 1);
        scanf_s("%s%d%s", s1[i], STR_SIZE, &n[i], s2[i], STR_SIZE);
        if ((s2[i][0] != 'C' && s2[i][0] != 'R') || (strlen(s2[i]) > 1))
        {
            printf("\nОшибка. Тип может быть только C или R!\n");
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int numbers[SIZE];
    char core[SIZE][STR_SIZE];
    char core_type[SIZE][STR_SIZE];

    setlocale(LC_ALL, "RUS");

    input(numbers, core, core_type);
    header();
    middle(numbers, core, core_type);
    bottom();
}