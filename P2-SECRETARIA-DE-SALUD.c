//SECRETARIA DE SALUD (ANDRIK)
#include<stdio.h>
#include<math.h>
   float peso, estatura,imc;

   
int main(){
  printf("Ingrese por favor su peso en kg\n");
  scanf("%f",&peso);
  printf("Ingrese por favor  su estatura en metros\n");
  scanf("%f",&estatura);
  imc = peso/ (pow(estatura,2));
  if (imc<18.5){
  printf("Su peso esta bajo\n");
  }
  if (imc>=18.5 && imc<=24.9){
  printf("Su peso esta normal\n");
  }
  if (imc>=25 && imc<=29.9){
  printf("Usted tiene sobrepeso\n");
  }
  if (imc>=30 && imc<=34.9){
  printf("Usted tiene obesidad tipo 1\n");
  }
  if (imc>=35 && imc<=39.9)
  {printf("Usted tiene obesidad tipo 2\n");}
  else if (imc>40){
  printf("Usted tiene hiper obesidad\n");
  }
  }

