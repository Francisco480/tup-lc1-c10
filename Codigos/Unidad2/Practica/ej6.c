<<<<<<< HEAD
/*Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do 
valor ingresado, imprimir los resultados*/

#include <math.h>
#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float num1, num2, suma, producto, resta;

    printf("ingrese los 2 numeros\n");
    scanf("%f %f", &num1, &num2);

    suma = num1 + num2;

    producto = num1 * num2;

    resta = num1 - num2;

    printf("el valor de la suma es : %f \n", suma);
    printf("el valor del producto es : %f \n", producto);
    printf("el valor de la resta es : %f \n", resta);

    system("pause");
    return 0;
=======
/*Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do 
valor ingresado, imprimir los resultados*/

#include <math.h>
#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float num1, num2, suma, producto, resta;

    printf("ingrese los 2 numeros\n");
    scanf("%f %f", &num1, &num2);

    suma = num1 + num2;

    producto = num1 * num2;

    resta = num1 - num2;

    printf("el valor de la suma es : %f \n", suma);
    printf("el valor del producto es : %f \n", producto);
    printf("el valor de la resta es : %f \n", resta);

    system("pause");
    return 0;
>>>>>>> fa8d99837018da2bb3a0a1535f403ba21fbf4894
}