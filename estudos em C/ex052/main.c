#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont,n,par,impar;

    printf("digite seis numeros quaisquer : \n");

    cont = 1;
    par = 0;
    impar = 0;
    while(cont <= 6){
        printf("digite o %i numero \n", cont);
        scanf("%i", &n);
        if(n % 2 == 0){
            par = par + 1;
        }
        else {
            impar = impar + 1;
        }
        cont++;
    }
        printf("foi digitado um total de %i numeros pares \n", par);
        printf("e foi digitado um total de %i numeros impares \n", impar);

        return 0;
}
