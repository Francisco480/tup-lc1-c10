/*Escriba un programa que pida ingresar un número y a continuación escriba en la 
consola si el mismo es par o impar.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    printf ("Ingrese el numero\n");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        printf ("El núuero (%i) es par\n", num);
    }
    else 
    {
        printf ("El numero (%i) es impar\n", num);
    }
    


    system ("pause");
    return 0;
}