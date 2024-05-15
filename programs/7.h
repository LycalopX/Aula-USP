#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/time.h>

int seven(int p)
{
    // Description
    if (p)
    {
        printf("7 - Analisa N natural, determinando todos seus divisores positivos.");

        return 0;
    };

    // Execution time pt. 1
    struct timeval tv1, tv2;
    gettimeofday(&tv1, NULL);

    int num, ndiv = 0, i;

    printf("\nN natural (exceto 0 e 1): ");
    scanf("%d", &num);

    if (num <= 1 || num % 1 != 0)
    {
        printf("Forneça um número natural e maior que um, por favor.");
        return 0;
    }

    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            ++ndiv;

            printf("%dº Divisor: %d\n", ndiv, i);
        };
    }

    // Execution time pt. 2
    gettimeofday(&tv2, NULL);
    printf("\nTempo de execução = %f seconds\n",
           (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 +
               (double)(tv2.tv_sec - tv1.tv_sec));
    return 0;
};