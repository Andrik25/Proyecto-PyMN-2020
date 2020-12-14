/*CALCULAR EL INDICE DE MASA CORPORAL*/
#include <stdio.h>
float P, Est, IMC;
char Nom[20];
char Edad[3];
int main()
{
    //Soliciatr los datos
    printf("ingrese un Nombre:");
    scanf ("%s",&Nom);
    
    printf("Ingrese una Edad:");
    scanf("%s",&Edad);
    
    printf("Ingrese un Peso (en kilogramos):");
    scanf("%f",&P);
    
    printf("Ingrese una Estatura (en metros):");
    scanf("%f",&Est);
  
    //Realizar los calculos
    IMC=P/(Est*Est);
    printf("\n %s \n", Nom);
    printf("\n %s \n", Edad);
    printf("P= %0.2f\n", P);
    printf("Est= %0.2f\n", Est);
    printf("El IMC es de : %0.2f\n", IMC);
}

