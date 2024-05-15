#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int three(int p)
{
    // Description
    if (p)
    {
        printf("3 - Somatória dos valores pares até N natural.");

        return 0;
    };

    // Actual Code
    int N, sum;

    printf("\nPor favor, forneça o número inteiro. \n");
    scanf("%d", &N);

    if (N < 0 || N % 1 != 0)
    {
        printf("Número NATURAL, po :(");

        return 0;
    }

    for (int i = 0; i < N; i = i + 2)
    {
        sum = i + sum;
    };

    printf("A somatória dos valores é %d", sum);

    return 0;
};