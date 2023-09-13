/*15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones. 
Mostrar el promedio por alumno y el promedio general.*/

#include <stdio.h>
#include <stdlib.h>

/*Ejemplo de matriz*/

void main()
{
    float nota, promedio, promGeneral, sumanotas,sumaNotasTotal;

    promGeneral=0;
    sumaNotasTotal=0;

    for (int i = 1; i <= 5; i++)
    {
        sumanotas=0;
        for (int j = 1; j <= 3; j++)
        {

            printf("Ingrese la nota %d del alumno %d \n",j,i);
            scanf ("%f", &nota);
            sumanotas = sumanotas + nota;
            sumaNotasTotal = sumaNotasTotal + nota;

            
        }
        promedio = sumanotas/3;
        
        printf("El promedio del alumno %d es: %0.2f \n",i, promedio);
    }
    promGeneral = (sumaNotasTotal/15);
    printf("El promedio general del curso es: %0.2f \n",promGeneral);

    system("pause");
}