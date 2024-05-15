#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/time.h>

int nine(int p)
{

    // Description
    if (p)
    {
        printf("9 - Simplesmente exibe a soma de todos o N naturais, menores que 1000 e múltiplos de 3 ou 5.");

        return 0;
    };

    // Execution time pt. 1
    struct timeval tv1, tv2;
    gettimeofday(&tv1, NULL);



    // CODE

    int i, sum = 0;

    printf("Soma deles: 3");

    for (i = 4; i < 1000; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = i + sum;

            printf(" + %d", i);
        };
    };

    printf(" = %d\n\nA soma completa dos números é: %d", sum, sum);
    // CODE



    // Execution time pt. 2
    gettimeofday(&tv2, NULL);
    printf("\n\nTempo de execução = %f seconds\n",
           (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 +
               (double)(tv2.tv_sec - tv1.tv_sec));
    return 0;
};