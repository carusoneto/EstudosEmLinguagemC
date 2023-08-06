#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,maior,menor;
    float v;

    cont = 1;
    maior = 0;
    menor = 1000000;
    printf("digite o preco de oito produtos : \n");
    while(cont <= 8){
        printf("digite o valor do %i produto \n", cont);
        scanf("%f", &v);
        if(v > maior){
            maior = v;
        }
        else if (v < menor){
            menor = v;
        }
        cont++;
    }

    printf("o maior valor eh %2.2f \n", maior);
    printf("e o menor valor eh %2.2f \n", menor);

    return 0;
}
