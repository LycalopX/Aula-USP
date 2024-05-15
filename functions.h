#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>  


int one(int p)
{
    // Description
    if (p)
    {
        printf("1- Fornece todos os números inteiros até N.");

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

int two(int p)
{
    // Description
    if (p)
    {
        printf("2- Imprime os N números naturais pares ou ímpares, como selecionado pelo usuário.");

        return 0;
    };

    // Actual Code
    int N, n, i, x;

    printf("\nPor favor, forneça o número inteiro. \n");
    scanf("%d", &N);

    printf("\n Agora, ele será? \n1- ímpar, \n2- par \n");
    scanf("%d", &n);

    if (N % 1 == 0 && N > 0)
    {

        if (n == 1)
        {
            i = 1;
        }
        else if (n == 2)
        {
            i = 2;
        }
        else
        {
            printf("Cara, isso não está nas opções...");
            return 0;
        };

        for (i = i; i <= N; i = i + 2)
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

int three(int p)
{
    // Description
    if (p)
    {
        printf("3- Somatória dos valores pares até N natural.");

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

    for (int i = 0; i < N; i = i + 2) {
        sum = i + sum;
    };

    printf("A somatória dos valores é %d", sum);

    return 0;

};


int four(int p)
{
    // Description
    if (p)
    {
        printf("4- Soma N valores");

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

int five(int p)
{
    // Description
    if (p)
    {
        printf("5- Lê N números inteiros e fornece sua média aritmética.");

        return 0;
    };

    // Actual Code
    printf("\nOlá, quantos números inteiros gostaria de fornecer?\n");

    int n;
    int static i;

    scanf("%d", &n);

    if (n % 1 != 0)
    {
        printf("Uhuh, já ouviu falar em números inteiros?");

        return 0;
    }

    int sum = 0, x;

    for (i = 1; i <= n; ++i)
    {
        printf("Número %d: ", i);

        scanf("%d", &x);
        sum = x + sum;
    }

    double med = (double)(sum)/(double)(--i);

    printf("\nA média dos números escolhidos é: %lf", med);

    return 0;
};


int biggerbetter(int p)
{
    // Description
    if (p)
    {
        printf("6- Lê os números e define qual o menor e o maior.");

        return 0;
    };

    // Actual Code
    printf("\nForneça a lista de números que gostaria de analisar\nPara fechar sua lista, digite qualquer valor não numérico (ex: a)\n");

    float static bigger, smaller;

    int x = 0;
    char exe[10];

    for (int i = 1; isdigit(x); ++i)
    {
        printf("Número %d: ", i);

        scanf("%lf", &x);

        if (!bigger) {
            bigger = x;
            smaller = x;
        };

        if (bigger < x) {
            bigger = x;
        };

        if (smaller > x) {
            smaller = x;
        };
    }

    printf("\nMaior número registrado: %fl\nMenor número resgistrado: %fl", bigger, smaller);

    return 0;
};
