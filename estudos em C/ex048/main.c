#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont;

    cont = 30;
    while(cont >= 1){
            if (cont % 4 == 0){
                printf("[%i] ",cont);
            }
            else {
            printf("%i ", cont);
            }
            cont = cont - 1;
    }

    printf("acabou !");

    return 0;
}
