#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/time.h>

int N(int p)
{
    // Description
    if (p)
    {
        printf("N- O que faz");

        return 0;
    };

    // Execution time pt. 1
    struct timeval tv1, tv2;
    gettimeofday(&tv1, NULL);

    // CODE



    // CODE

    // Execution time pt. 2
    gettimeofday(&tv2, NULL);
    printf("\n\nTempo de execução = %f seconds\n",
           (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 +
               (double)(tv2.tv_sec - tv1.tv_sec));
    return 0;
};