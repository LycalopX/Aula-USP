#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <errno.h>

// All of our programs, separately
#include "programs/1.h"
#include "programs/2.h"
#include "programs/3.h"
#include "programs/4.h"
#include "programs/5.h"
#include "programs/6.h"
#include "programs/7.h"
#include "programs/8.h"
#include "programs/9.h"
#include "programs/10.h"
#include "programs/11.h"




// Please update:

int main(int argc, char **argv)
{

    // All of the functions
    typedef int (*f)(int);
    f func[ 100 /* Number of functions */] = {&one, &two, &three, &four, &five, &biggerbetter, &seven, &eight, &nine, &ten, &eleven};

    int x;

    printf("\nPor favor, selecione uma das seguintes funções:\n------------------------------------------------ \n");

    for (int i = 0; func[i]; ++i)
    {
        printf("\n");

        func[i](1);
    }

    printf ("\n\n------------------------------------------------\nNúmero de escolha: ");

    scanf("%d", &x);

    if (x <= 11 && x > 0 && x%1 == 0) {

    --x;
    func[x](0);

    } else {
        printf("\n\nRespeitosamente, essa função é bulhufas.");

        return 0;
    }

}