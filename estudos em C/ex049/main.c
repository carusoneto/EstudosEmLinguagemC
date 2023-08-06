#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n1,n2,p;
    printf("digite o primeiro valor da contagem : ");
    scanf("%i", &n1);
    printf("digite o final da contagem : ");
    scanf("%i", &n2);
    printf("digite qual o padrao de salto : ");
    scanf("%i", &p);
    if (n1 < n2){
        while(n1 <= n2){
            printf("%i ", n1);
            n1 = n1 + p;
        }
    }
    else {
        while(n1 >= n2){
            printf("%i ", n1);
            n1 = n1 - p;
        }
    }
    return 0;

}
