/*Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en 
pantalla*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;
    printf ("Ingrese el primer numero\n");
    scanf ("%i", &num1);

    printf ("Ingrese el segundo numero\n");
    scanf ("%i", &num2);

    printf ("Ingrese el tercer numero\n");
    scanf ("%i", &num3);
    
    if (num1>num2 & num1>num3)
    {
        printf ("El primer numero ingresado (%i) es el mayor.\n", num1);
    }
    else if (num2>num1 & num2>num3)
    {
        printf ("El segundo numero ingresado (%i) es el mayor\n", num2);
    }
    else if (num3>num1 & num3>num2)
    {
        printf ("El tercer numero ingresado (%i) es el mayor\n", num3);
    }
    else 
    {
        printf ("Los 3 numeros ingresados son iguales o bien hay 2 mayores (%i, %i, %i)\n", num1, num2, num3);
    }

    system ("pause");
    return 0;
}