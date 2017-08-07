#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("saisir la valeur numero 1 :");
    scanf("%d", &a);
    printf("saisir la valeur numero 2 : ");
    scanf("%d", &b);
    printf("la valeur numero 1 est : %d \n", a );
    printf("la valeur numero 1 est : %d \n\n", b );
    c=a;
    a=b;
    b=c;
    printf ("*****Apres echange*** \n\n");
    printf("la valeur numero 1 est : %d \n", a );
    printf("la valeur numero 1 est : %d ", b );


    return 0;
}
