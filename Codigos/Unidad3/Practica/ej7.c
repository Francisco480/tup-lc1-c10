<<<<<<< HEAD
/*Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>

int main()
{
    
    float venta, total;
    total = 0;
    setlocale(LC_ALL, "es_ES"); 
    printf("Ingrese el valór de la venta realizada\n");
    scanf("%f", &venta);

    if (venta < 0)
    {
        printf("Valor ingresado invalido\n");
    }
    if (venta > 0 & venta < 100000)
    {
        total = venta - (venta * 0.10);
        printf("El total es: %f\n", total);
    }
    else if (venta >= 100000)
    {
        total = venta - (venta * 0.15);
        printf("El total es: %f\n", total);
    }
    else
    {
        printf("Valor ingresado invalido\n");
    }

    system("pause");
    return 0;
=======
/*Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y 
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar 
dicha situación.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float venta,  total;
    total= 0;

    printf ("Ingrese el valor de la venta realizada\n");
    scanf ("%f", &venta);

    if (venta<0)
    {
        printf ("Valor ingresado invalido\n");
    }
    if (venta>0 & venta<100000)
    {
        total = venta - (venta * 0.10);
        printf ("El total es: %f\n",total);
    }
    else if (venta>=100000)
    {
        total = venta - (venta * 0.15);
        printf ("El total es: %f\n",total); 
    }
    else 
    {
        printf ("Valor ingresado invalido\n");
    }
    


    system("pause");
    return 0;
>>>>>>> fa8d99837018da2bb3a0a1535f403ba21fbf4894
}