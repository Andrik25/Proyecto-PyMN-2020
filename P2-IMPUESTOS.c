//IMPUESTOS (ANDRIK)
#include <stdio.h>
int main()
{
    int ingresos;
    char EstadoCivil;
    float Impuesto, TarifadeImpuestos;
    printf("\n¿Cual es tu estado civl?: S=Soltero o C=Casado?");
    scanf("%c",&EstadoCivil);
    printf("\n¿CuaL es tu mensaul ingreso?: ");
    scanf("%d",&ingresos);
    if (EstadoCivil=='C')
    {
        if ( ingresos<64000)
        {
         Impuesto=0.10; 
        }
        else
        {
         Impuesto=0.25;
        }
    } 
    if (EstadoCivil=='S')
    {
        if (ingresos>32000)
        {
           Impuesto=0.25;
        }
        else
        {
           Impuesto=0.10;
        }
   }
   TarifadeImpuestos= ingresos*Impuesto;
   printf("\nTu estado civil es: %c",EstadoCivil);
   printf("\nEl ingreso es de: %d",ingresos);
   printf("\nEl porcentaje de impuesto es de: %.2f",Impuesto);
   printf("\nEl impuesto es de: %.2f, tarifadeImpuestos");
           return 0;
 }

