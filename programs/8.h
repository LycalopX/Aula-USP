#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/time.h>

int eight(int p)
{
    // Description
    if (p)
    {
        printf("8 - Calcula a soma de todos os divisores de um N inteiro, exceto ele mesmo.");

        return 0;
    };

    // Execution time pt. 1
    struct timeval tv1, tv2;
    gettimeofday(&tv1, NULL);

    // CODE

    int num, sum = 1;

    printf("\nN inteiro: ");
    scanf("%d", &num);

    if (num % 1 != 0)
    {
        printf("Forneça um número inteiro, por favor.");
        return 0;
    }

    printf("Soma dos divisores: 1");

    for (int i = 2; i < num; ++i) {

        if (num % i == 0) {
            sum = i + sum;

            printf(" + %d", i);
        };

    };

    printf(" = %d", sum);
    // CODE


    // Execution time pt. 2
    gettimeofday(&tv2, NULL);
    printf("\n\nTempo de execução = %f seconds\n",
           (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 +
               (double)(tv2.tv_sec - tv1.tv_sec));
    return 0;
};