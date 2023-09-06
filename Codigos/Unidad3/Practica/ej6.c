/*Leer una nota de un alumno por consola e informar la condición del mismo. (menor 
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar 
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota 
inválida”.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;
    printf ("Ingrese la nota del alumno\n");
    scanf ("%f", &nota);

   
    
    if (nota>=0 & nota<4)
    {
        printf ("Nota : %f  Reprobado\n", nota);
    }
    else if (nota>=4 & nota<6)
    {
        printf ("Nota : %f  Regular\n", nota);
    }
    else if (nota>=6)
    {
        printf ("Nota : %f  Promocionado\n", nota);
    }
    else
    {
        printf ("Nota : %f  invalida\n", nota);
    }

    system ("pause");
    return 0;
}