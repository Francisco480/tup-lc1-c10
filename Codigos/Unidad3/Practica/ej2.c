/*Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en 
pantalla. Informar también si los números son iguales.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf ("Ingrese el primer numero\n");
    scanf ("%i", &num1);

    printf ("Ingrese el segundo numero\n");
    scanf ("%i", &num2);
    
    if (num1>num2)
    {
        printf ("El primer numero ingresado es mayor que el segundo numero ingresado\n");
    }
    else if (num2>num1)
    {
        printf ("El segundo numero ingresado es mayor que el primer numero ingresado\n");
    }
    else
    {
        printf ("Los numeros ingresados son iguales\n");
    }

    system ("pause");
    return 0;
}