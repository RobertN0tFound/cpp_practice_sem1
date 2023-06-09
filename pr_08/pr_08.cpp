﻿// Действие: определение позиции начала в строке s слова с номером n.
// Разделителем будем считать: ' ', ',', '.'
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    char tmp[10];
    char oper[15];
    int index[500]; // Массив индексов начала слов
    int i, f;
    int cnt = 0; // Количество слов
    bool d = true;

    setlocale(LC_ALL, "Russian");
    while (true)
    {
        printf("\n\nВведите строку >> ");
        gets_s(str, 1000);
        printf("\nВведите номер слова в строке >> ");
        gets_s(tmp, 10);
        f = atoi(tmp);
        printf("\nТрадиционная обработка массивов: 't'\n");
        printf("Адресная арифметика: 'a'\n");
        printf("Для выхода из программы: 'q'\n");
        printf("Введите код обработки >> ");
        gets_s(oper, 15);
        switch (oper[0])
        {
        case 't':
        {
            // Отфильтровать лидирующие знаки разделителя
            // Если встретился символ отличный от разделителей, то считать этот символ началом слова
            // Запоминаем в массиве индекс начала слова
            // Увеличиваем счетчик слов на 1
            // Ищем следующий разделитель
            // Повторяем цикл до окончания строки
            for (i = 0; i < strlen(str); i++)
            {
                if ((str[i] != ' ') && (str[i] != ',') && (str[i] != '.'))
                {
                    if (d)
                    {
                        index[cnt++] = i; // Записываем в массив индексов начало i-го слова и увеличиваем счетсчик на 1
                        d = false; // Нашли слово
                    }
                }
                else
                {
                    d = true;
                }
            }
            if ((f > 0) && (f <= cnt))
            {
                printf("\nЗаданное слово >> ");
                for (i = index[f - 1]; i < strlen(str); i++)
                {
                    if ((str[i] != ' ') && (str[i] != ',') && (str[i] != '.'))
                    {
                        printf("%c", str[i]);
                    }
                    else
                    {
                        break;
                    }
                }
                printf("\n");
            }
            else
            {
                printf("\nЗаданный номер >> %d\nВсего слов в строке >> %d\n", f, cnt);
            }
            break;
        }
        case 'a':
        {
            // Отфильтровать лидирующие знаки разделителя
            // Если встретился символ отличный от разделителей, то считать этот символ началом слова
            // Запоминаем в массиве индекс начала слова
            // Увеличиваем счетчик слов на 1
            // Ищем следующий разделитель
            // Повторяем цикл до окончания строки
            for (i = 0; i < strlen(str); i++)
            {
                if ((*(str + i) != ' ') && (*(str + i) != ',') && (*(str + i) != '.'))
                {
                    if (d)
                    {
                        *(index + cnt++) = i; // Записываем в массив индексов начало i-го слова и увеличиваем счетсчик на 1
                        d = false; // Нашли слово
                    }
                }
                else
                {
                    d = true;
                }
            }
            if ((f > 0) && (f <= cnt))
            {
                printf("\nЗаданное слово >> ");
                for (i = *(index + (f - 1)); i < strlen(str); i++)
                {
                    if ((*(str + i) != ' ') && (*(str + i) != ',') && (*(str + i) != '.'))
                    {
                        printf("%c", *(str + i));
                    }
                    else
                    {
                        break;
                    }
                }
                printf("\n");
            }
            else
            {
                printf("\nЗаданный номер >> %d\nВсего слов в строке >> %d\n", f, cnt);
            }
            break;
        }
        case 'q':
        {
            return 0;
        }
        }
    }
}