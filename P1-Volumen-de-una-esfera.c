/*Volumen de una esfera*/
#include <stdio.h>
float rd, Volumen, pi=3.1416;
int main()
{
    //Solicitar el valor  
    printf("Ingrese por favor el valor del radio:");
scanf("%f",&rd);
//Realizar los calculos 
Volumen=0.75*pi*rd*rd*rd;
//Presentar los resultados 
printf ("El volumen es: %2.3f", Volumen);
}

