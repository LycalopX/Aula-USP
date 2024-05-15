#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int five(int p)
{
    // Description
    if (p)
    {
        printf("5 - Lê N números inteiros e fornece sua média aritmética.");

        return 0;
    };

    // Actual Code
    printf("\nOlá, quantos números inteiros gostaria de fornecer?\n");

    int n;
    int static i;

    scanf("%d", &n);

    if (n % 1 != 0)
    {
        printf("Uhuh, já ouviu falar em números inteiros?");

        return 0;
    }

    int sum = 0, x;

    for (i = 1; i <= n; ++i)
    {
        printf("Número %d: ", i);

        scanf("%d", &x);
        sum = x + sum;
    }

    double med = (double)(sum) / (double)(--i);

    printf("\nA média dos números escolhidos é: %lf", med);

    return 0;
};