#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;

    cont = 0;

    do {
        printf("%i \n", cont);
        cont++;
    }
    while(cont <= 10);

    return 0;
}
