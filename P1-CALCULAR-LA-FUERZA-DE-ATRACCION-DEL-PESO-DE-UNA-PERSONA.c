/*CALCULAR LA FUERZA DE ATRACCION DEL PESO DE UNA PERSONA*/
#include <stdio.h>
float W, Masa, Gravitatoria=9.81;
int main()
{
    //solicitar el valor
    printf ("ingrese la Masa:");
    scanf ("%f",&Masa);
    //Realizar los calculos 
    W=Masa*Gravitatoria;
    //Presentar los resultados
    printf("La fuerza de atraccion es de: %20.2f", W);
}

