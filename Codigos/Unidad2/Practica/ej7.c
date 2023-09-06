<<<<<<< HEAD
/*Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su 
sueldo e imprimirlo*/

#include <math.h>
#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float horas, diasTrabajados, sueldo;

    printf("ingrese las horas trabajadas\n");
    scanf("%f", &horas);

    printf("ingrese los dias trabajados en el mes\n");
    scanf("%f", &diasTrabajados);

    sueldo = horas * diasTrabajados;

    printf("el valor del sueldo es : %f \n", sueldo);

    system("pause");
    return 0;
=======
/*Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su 
sueldo e imprimirlo*/

#include <math.h>
#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float horas, diasTrabajados, sueldo;

    printf("ingrese las horas trabajadas\n");
    scanf("%f", &horas);

    printf("ingrese los dias trabajados en el mes\n");
    scanf("%f", &diasTrabajados);

    sueldo = horas * diasTrabajados;

    printf("el valor del sueldo es : %f \n", sueldo);

    system("pause");
    return 0;
>>>>>>> fa8d99837018da2bb3a0a1535f403ba21fbf4894
}