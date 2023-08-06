#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,n,resul;

    printf("digite qual o numero voce quer ver a taboada : \n");
    scanf("%i", &n);
    for (cont = 0; cont <= 9; cont++){
        resul = n * cont;
        printf("%i x %i = %i \n",n,cont,resul);
    }

    return 0;
}
