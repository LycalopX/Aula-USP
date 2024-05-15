#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int one(int p)
{
    // Description
    if (p)
    {
        printf("1 - Fornece todos os números inteiros até N.");

        return 0;
    };

    // Actual Code
    int N, i;

    printf("\nPor favor, forneça o número inteiro. \n");
    scanf("%d", &N);

    if (N % 1 == 0 && N > 0)
    {

        for (i = 0; i <= N; ++i)
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