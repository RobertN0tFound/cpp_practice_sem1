#include <iostream>
#include <stdio.h>
#define OUTPUT_SIZE "\nВведите длину массива >> "
#define OUTPUT_ELEMENT "\nВведите значение элемента a[%d] >> "
#define INPUT_1 "%d", &n
#define INPUT_2 "%d", &a[i]
#define INPUT_3 "%d", cnt
#define ERR_MSG "'\nЧисло не входит в диапазон допустимых значений (-50 - 50)"
#define ERR_MSG_2 "\nERROR"
#define pr printf
#define in scanf_s
#define CIRCLE for
#define GO_BACK goto a1;
#define CONDITION(n) if(n)

int main()
{
    int a[20];
    int i, n;
    int cnt = 0;

    setlocale(LC_ALL, "Russian");
    pr(OUTPUT_SIZE);
    in(INPUT_1);
    CONDITION(n > 20 || n < 5)
    {
        pr(ERR_MSG_2);
    }
    CIRCLE(i = 0; i < n; i++)
    {
        pr(OUTPUT_ELEMENT, i);
        in(INPUT_2);
        CONDITION(a[i] > 50)
        {
            pr(ERR_MSG);
        }
        CONDITION(a[i] < -50)
        {
            pr(ERR_MSG);
        }
        CONDITION(a[i] == a[i - 1])
        {
            cnt++;
        }
    }
    pr(INPUT_3);
}