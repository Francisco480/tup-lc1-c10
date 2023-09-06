/*Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el 
perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.
*/
#include <math.h>
#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float lado1, lado2, perimetro, hipotenusa, superficie;

    printf("ingrese los 2 lados\n");
    scanf("%f %f", &lado1, &lado2);

    printf("El lado 1 es: %f  y el lado 2 es %f ", lado1, lado2);

    hipotenusa = sqrt(pow(lado1,2)+ pow(lado2,2));
    printf("el valor de la hipotenusa es : %f \n", hipotenusa);

    perimetro = lado1 + lado2 + hipotenusa;

    printf("el valor de la perimetro es : %f \n", perimetro);

    superficie = (lado1 * lado2)/2;

    printf("el valor de la superficie es : %f \n", superficie);

    system("pause");
    return 0;
}