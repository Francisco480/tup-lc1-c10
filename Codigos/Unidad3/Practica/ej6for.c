/* Suma de los 10 primeros números múltiplos de tres.*/

#include<stdio.h>
#include<stdlib.h>

int main (){

    int i, suma=0;

    for ( i = 1; i <= 10; i++)
    {
        printf("%d\n", i*3);
    }
    

    system ("pause");
    return 0;
}