#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>


int biggerbetter(int p)
{
    // Description
    if (p)
    {
        printf("6 - Lê os números e define qual o menor e o maior.");

        return 0;
    };

    // Actual Code
    printf("\nForneça a lista de números que gostaria de analisar\nPara fechar sua lista, digite 0.\n");

    // Defining the variables
    double static bigger, smaller;

    // Our two strings...
    char x[100];
    char numbers[10] = {};

    double n, num;

    // So, first we must define the array of numbers (0,1,2...)
    for (int n = 0; n < 9; ++n)
    {
        char str = n + '0';

        numbers[n] = str;
    };

    // If x is a numbers, ver = 1...
    int static ver = 0;

    // Going through the numbers...
    for (int i = 1; i > 0; ++i)
    {
        printf("Número %d: ", i);

        // The number in string
        scanf("%s", x);

        // Checking if it IS a number or not...
        for (int y = 0; numbers[y]; ++y)
        {

            for (int z = 0; x[z]; ++z)
            {

                if (numbers[y] == x[z])
                {
                    // It's a number!

                    num = atof(x);
                    ver = 1;

                    break;
                }
                // Might not be a number
            };
        }

        if (ver == 0)
        {
            // printf("IT WORKS");
            break;
        }

        if (!bigger)
        {
            bigger = num;
            smaller = num;
        };

        if (bigger < num)
        {
            bigger = num;
        };

        if (smaller > num)
        {
            smaller = num;
        };
        ver = 0;
    }

    printf("\n\nMaior número registrado: %lf\nMenor número resgistrado: %lf", bigger, smaller);

    return 0;
};
