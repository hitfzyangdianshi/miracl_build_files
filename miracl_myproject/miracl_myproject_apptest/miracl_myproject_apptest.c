#include <stdio.h>


#include "miracl.h"


/* include MIRACL system */

#pragma warning(disable : 4996)

int  main()
{ /* calculate factorial of number */
    big nf;
    /* declare "big" variable nf */
    int n;
    miracl* mip = mirsys(5000, 10);  /* initialise system to base 10, 5000 digits per "big" */

    nf=mirvar(1);

    printf("factorial program\n");
    printf("input number n= \n");
    scanf("%d", &n);
    getchar();

    while (n > 1)
        premult(nf, n--, nf);

    printf("n!= \n");
    otnum(nf, stdout); /* output result */

}
