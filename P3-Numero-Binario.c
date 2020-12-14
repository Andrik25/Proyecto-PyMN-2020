//Numero Binario (Andrik)
#include <stdio.h>
#include <conio.h>   
int main() 
{ 
int Z,X,numero,n2=0; 
int Binario[50]; 
Binario[0]=0; 
 printf("Hola, por favor introduce el numero decimal a convertir  :  " ); 
scanf("%lu",&numero); 
for (X=0;X<50;X++) { 
Binario[X]=numero%2; 
numero=numero/2; 
if(numero==0) 
break; 
} 
for(Z=X;Z>=0;Z--) { 
printf("%d",Binario[Z]); 
} 
getch(); 
}

