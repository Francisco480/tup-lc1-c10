/*Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int i, sumapar=0;

    for (i = 1; i <=10; i++)
    {
        if (i%2==0)
        {
            sumapar=sumapar + i;
        }
        
    }
    printf ("La suma de los pares es %d\n", sumapar);
    

    system ("pause");
    return 0;
}