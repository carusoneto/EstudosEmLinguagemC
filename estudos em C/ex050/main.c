#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,soma;

    cont = 500;
    soma = 0;
    while(cont >= 0){
        printf("%i ", cont);
        soma = soma + cont;
        cont = cont - 50;
    }

    printf(" a soma entre todos os numero eh : %i \n ", soma);

    return 0;
}
