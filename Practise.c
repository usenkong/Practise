#include <stdio.h>
#include <locale.h>
int main()
{
    int c1, zn1, c2, zn2, c3, zn3;
    int c = 0;
    setlocale(LC_ALL, "Russian");
    printf("Введите числитель первой дроби-> ");
    scanf_s("%d/n", &c1);
    printf("Введите знаменатель первой дроби-> ");
    scanf_s("%d/n", &zn1);
    if (zn1 == 0)
    {
        printf("На ноль делить нельзя");
        return 0;
    }
    printf("Введите числитель второй дроби-> ");
    scanf_s("%d/n", &c2);
    printf("Введите знаменатель второй дроби-> ");
    scanf_s("%d/n", &zn2);
    if (zn2 == 0)
    {
        printf("На ноль делить нельзя");
        return 0;
    }
    printf(" +=1\n -=2\n *=3\n /=4\n Введите действие ->");
    scanf_s("%d/n", &c);

    switch (c)
    {
    case 1:
    {
        c3 = c1 * zn2 + c2 * zn1;
        zn3 = zn1 * zn2;
        printf("%d / %d", c3, zn3);
        break;
    }
    case 2:
    {
        c3 = c1 * zn2 - c2 * zn1;
        zn3 = zn1 * zn2;
        printf("%d / %d", c3, zn3);
        break;
    }
    case 3:
    {
        c3 = c1 * c2;
        zn3 = zn1 * zn2;
        printf("%d / %d", c3, zn3);
        break;
    }
    case 4:
    {
        c3 = c1 * zn2;
        zn3 = zn1 * c2;
        printf("%d / %d", c3, zn3);
        break;
    }
    }
}
