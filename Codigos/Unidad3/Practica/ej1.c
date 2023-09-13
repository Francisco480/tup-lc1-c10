/*Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en 
pantalla.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
   
    
    int num1, num2;
    printf ("Ingrese el primer número\n");
    scanf ("%i", &num1);

    printf ("Ingrese el segundo numero\n");
    scanf ("%i", &num2);
    
    if (num1>num2)
    {
        printf ("El primer numero %i es mayor que el segundo numero ingresado\n", num1);
    }
    else if (num2>num1)
    {
        printf ("El segundo numero %i es mayor que el primer numero ingresado\n", num2);
    }
    else
    {
        printf ("Los numeros %i y %i son iguales\n", num1, num2);
    }

    system ("pause");
    return 0;
}