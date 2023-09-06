/*- Ingresar dos valores enteros, sumarlos e imprimir esta suma.*/

#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    int num1, num2, total;

    printf("ingrese un numero:\n");
    scanf("%i", &num1);

    printf("ingrese un numero:\n");
    scanf("%i", &num2);

    total = num1 + num2;

    printf("La suma de ambos numeros es: %i\n", total);

    system("pause");
    return 0;
}