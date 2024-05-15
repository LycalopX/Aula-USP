#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/time.h>

int ten(int p)
{
    // Description
    if (p)
    {
        printf("10- Compara números inteiros, encontrando o maior e o menor.");

        return 0;
    };

    // Execution time pt. 1
    struct timeval tv1, tv2;
    gettimeofday(&tv1, NULL);

    // CODE
    int num, big, small;

    for (int i = 1; i > 0; i++)
    {
        printf("\n%dº Número: ", i);
        scanf("%d", &num);


        if (num % 1 != 0 || num < 0) {
            break;
        };


        if (i == 1) {
            big = num;
            small = num;

        }

        if (big < num) {
            big = num;
        };
        
        if (small > num) {
            small = num;
        }

    }

    printf("\nO maior número: %d \nO menor número: %d", big, small);

    // CODE

    // Execution time pt. 2
    gettimeofday(&tv2, NULL);
    printf("\n\nTempo de execução = %f seconds\n",
           (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 +
               (double)(tv2.tv_sec - tv1.tv_sec));
    return 0;
};