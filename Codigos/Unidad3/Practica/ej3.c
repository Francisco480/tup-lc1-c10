/* Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf ("Ingrese  numero\n");
    scanf ("%i", &num);

    
    if (num>0)
    {
        printf ("El numero %i es positivo\n", num);
    }
    else if (num<0)
    {
        printf ("El numero %i es negativo\n",num);
    }
    else
    {
        printf ("El numero %i es nulo\n",num);
    }

    system ("pause");
    return 0;
}