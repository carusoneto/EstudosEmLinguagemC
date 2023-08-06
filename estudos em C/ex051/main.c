#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont,soma,n;

    printf("digite 7 numero : \n");
    cont = 1;
    while(cont <= 7){
        printf("digite o %i numero \n", cont);
        scanf("%i", &n);
        soma = soma + n;
        cont++;
    }

    printf("a soma dos numero eh : %i ", soma);

    return 0;
}
