#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/time.h>

int eleven(int p)
{
    // Description
    if (p)
    {
        printf("11- Calcula o número harmônico (Hn), da série fornecida pelo usuário.");

        return 0;
    };

    // Execution time pt. 1
    struct timeval tv1, tv2;
    gettimeofday(&tv1, NULL);

    // CODE

    int Hn;
    double n = 1;

    printf("\n\nColoque o enésimo número da série harmônica que você quer calculado: ");
    scanf("%d", &Hn);

    if (Hn < 0 || Hn % 1 != 0) {

        printf("Esse número não é válido.");
        return 0;
    };
    
    printf("Hn = 1 ");

    for (double i = 2; i <= Hn; i++) {
        double N = 1/i;

        n = (N + n);

        printf("+ %lf ", N);
    };

    printf("= %lf \n\nHn = %lf", n, n);



    // CODE

    // Execution time pt. 2
    gettimeofday(&tv2, NULL);
    printf("\n\nTempo de execução = %f seconds\n",
           (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 +
               (double)(tv2.tv_sec - tv1.tv_sec));
    return 0;
};