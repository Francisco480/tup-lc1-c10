/*Diseñe un algoritmo que sume los 20 primeros números impares.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int i, suma=0;

    for ( i = 1; i < 20; i++)
    {
        if (i%2!=0){
            suma=suma+i;
        }
    }
    
    printf("%d\n",suma);


    system("pause");
    return 0;
}