/*Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.*/

#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float lado1, lado2, lado3, perimetro;

    printf("ingrese el primer lado:\n");
    scanf("%f", &lado1);
    
    printf("ingrese el segundo lado:\n");
    scanf("%f", &lado2);

    printf("ingrese el tercer lado:\n");
    scanf("%f", &lado3);

    perimetro = (lado1 + lado2 + lado3);

    printf("LEl perimetro del triangulo es: %f\n", perimetro);

    system("pause");
    return 0;
}