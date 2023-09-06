<<<<<<< HEAD
/*El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con 
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al 
usuario los resultado*/

#include <math.h>
#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float lado1, lado2, diagonal, superficie, perimetro;

    printf("ingrese los 2 lados\n");
    scanf("%f %f", &lado1, &lado2);

    perimetro = (lado1*2) + (lado2*2);

    diagonal = sqrt(pow(lado1,2)+ pow(lado2,2));

    superficie = lado1 * lado2;

    printf("el valor de la diagonal es : %f \n", diagonal);
    printf("el valor del perimetro es : %f \n", perimetro);
    printf("el valor de la superficie es : %f \n", superficie);

    system("pause");
    return 0;
=======
/*El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con 
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al 
usuario los resultado*/

#include <math.h>
#include <stdio.h>  //Me permite llamar a la funcion printf//
#include <stdlib.h> //Me permite llamar a la funcion system//

int main()
{
    float lado1, lado2, diagonal, superficie, perimetro;

    printf("ingrese los 2 lados\n");
    scanf("%f %f", &lado1, &lado2);

    perimetro = (lado1*2) + (lado2*2);

    diagonal = sqrt(pow(lado1,2)+ pow(lado2,2));

    superficie = lado1 * lado2;

    printf("el valor de la diagonal es : %f \n", diagonal);
    printf("el valor del perimetro es : %f \n", perimetro);
    printf("el valor de la superficie es : %f \n", superficie);

    system("pause");
    return 0;
>>>>>>> fa8d99837018da2bb3a0a1535f403ba21fbf4894
}