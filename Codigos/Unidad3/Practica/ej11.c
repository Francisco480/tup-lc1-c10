#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    float  num1, num2, suma, resta, multiplicacion, division;
    int option;

    printf("Ingrese el primer numero\n");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero\n");
    scanf("%f", &num2);
    
    printf("Ingrese 1 para sumar, 2 para restar, 3 para multiplicar, 4 para dividir o 5 para salir\n");
    scanf("%i", &option);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1/num2;

    switch (option)
        {
        case 1:
            printf ("La suma es %.2f\n", suma);
            break;
        case 2:
            
            printf ("La resta es %.2f\n", resta);
            break;
        case 3:
            
            printf ("La multiplicacion es %.2f\n", multiplicacion);
            break;
        case 4:
            if (num2 == 0) {
                printf ("No es posible realizar la division\n");
            }else
            
            printf ("La division es %.2f\n", division);
            break;
        case 5:
            printf ("Saludos\n");
            break;
        default:
        printf ("No ingreso un numero del 1 al 5\n");
            break;
        }

    system("pause");
}