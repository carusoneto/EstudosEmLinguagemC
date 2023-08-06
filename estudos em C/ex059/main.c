#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,soma;

    cont = 6;
    soma = 0;
    while(cont <= 100){
        printf("%i ", cont);
        soma = soma + cont;
        cont = cont + 2;
    }

    printf(" a soma entre todos os numero eh : %i \n ", soma);

    return 0;
}
