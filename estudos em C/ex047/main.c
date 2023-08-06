#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n1,cont;

    printf("digite um numero para que eu conte ate ele : ");
    scanf("%i", &n1);

    cont = 1;

    while(cont <= n1){
        printf("%i \n", cont );
        cont = cont + 1;
    }

    printf("acabou !");

    return 0;
}
