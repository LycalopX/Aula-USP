#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int two(int p)
{
    // Description
    if (p)
    {
        printf("2 - Imprime os N números naturais pares ou ímpares, como selecionado pelo usuário.");

        return 0;
    };

    // Actual Code
    int N, n, i, x;

    printf("\nPor favor, forneça o número inteiro. \n");
    scanf("%d", &N);

    printf("\n Agora, ele será? \n1- ímpar, \n2- par \n");
    scanf("%d", &n);

    if (N % 1 == 0 && N > 0)
    {

        if (n == 1)
        {
            i = 1;
        }
        else if (n == 2)
        {
            i = 2;
        }
        else
        {
            printf("Cara, isso não está nas opções...");
            return 0;
        };

        for (i = i; i <= N; i = i + 2)
        {
            printf("\n%d", i);
        };
    }
    else
    {
        printf("Forneça um número natural.");
        return 0;
    }

    return 0;
};