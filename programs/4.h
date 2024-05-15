#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int four(int p)
{
    // Description
    if (p)
    {
        printf("4 - Soma N valores");

        return 0;
    };

    // Actual Code
    printf("\nHello, there! \nHow many values would you like to take into account? \n");

    int n;
    scanf("%d", &n);

    int sum = 0, x;

    for (int i = 1; i <= n; ++i)
    {
        printf("Ok, please type number %d: ", i);

        scanf("%d", &x);
        sum = x + sum;
    }

    printf("\nThe sum of the numbers you chose is: %d", sum);

    return 0;
}
