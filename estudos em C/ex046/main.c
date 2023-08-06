#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont ;

    cont = 100;
    while (cont >= 0){
        printf("%i \n",cont);
        cont = cont - 10;
    }

    printf("acabou !");

    return 0;
}
