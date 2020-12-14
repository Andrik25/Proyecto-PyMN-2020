#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int dgl (int *agl, int d);
int dimp (int*agl,int d);
int dtor(int *agl, int d);
int nale(int *agl, int d); 
int sagl (int *agl, int d); 
int suagl(int*agl,int d);
int dmz(int arg[][100],int g, int z); 
int mat(int arg[][100], int g, int z);
int amtrz(int arg[][100],int g, int columns);
int dt(int arg[][100],int n1, int x1);
int dta(int a[][100],int n2, int x2);
int sdm(int rb[][100], int n1, int x1);
int y(int rb[][100],int n1, int x1);
int arg[100][100],a[100][100],rb[100][100];
int entrada,k,d,v,g,z,n1,x1,n2,x2;
int suma=0;
int agl1[100], agl2[100], agl3 [100],agl4[100];
int main(){
  printf ("Elija un numero de entrada a resolver?\n");
  scanf("%d",&entrada);
switch (entrada){
  case 1:
  printf("Por favor ingrese  el tamano de los arreglos\n");
  scanf("%d",&d);
  printf("Ingrese por favor los numeros del arreglo 1 (%d): \n",d);
  dgl (agl1,d);
  printf("Ingrese por favor los numeros del arreglo 2 (%d): \n",d);
  dgl  (agl2,d);
  printf("Arreglo 1: \n");
  dimp (agl1,d);
  printf("Arreglo 2: \n");
  dimp (agl2,d);
  break;
  case 2:
  printf("Por favor ingrese el tamano de los arreglos\n");
  scanf("%d",&d);
  printf("Arreglo 1: \n");
  nale(agl1,d);
  printf("Arreglo 2: \n");
  nale(agl2,d);
  break;
  case 3:
  printf("Por favor ingrese el tamano de los arreglos\n");
  scanf("%d",&d);
  printf("Ingrese por favor los numeros del arreglo 1 (%d): \n",d);
  dgl (agl1,d);
  printf("Ingrese por favor los numerosn del arreglo 2 (%d): \n",d);
  dgl  (agl2,d);
  printf ("La suma de los anteriores arreglos vectoriales es: \n");
  sagl (agl3,d);
  break;
  case 4:
  printf("Por favor ingrese el tamano de los arreglos\n");
  scanf("%d",&d);
  printf("Ingrese por favor los numeros del arreglo 1 (%d): \n",d);
  dgl  (agl1,d);
  printf ("La suma del arreglo es :  ");
  suagl (agl4,d);
  printf("\n");
  break;
  case 5:
  printf("Ingrese el numero de filas\n");
  scanf("%d",&g);
  printf("Ingrese el numero de columnas\n");
  scanf("%d",&z);
  dmz(arg,g,z);
  printf("\n" );
  printf("Esta es la matriz\n");
  mat(arg,g,z);
  printf("\n");
  break;
  case 6:
  printf("Ingrese por favor el numero de filas\n");
  scanf("%d",&g);
  printf("Ingrese por favor el numero de columnas\n");
  scanf("%d",&z);
  amtrz(arg,g,z);
  printf("\n");
 break;
 case 7:
 printf("Ingrese por favor el numero de filas de la matriz 1\n");
 scanf("%d",&n1);
 printf("Ingrese por favor el numero de columnas de la matriz 1\n");
 scanf("%d",&x1);

 printf("Ingrese por favor el numero de filas de la matriz 2\n");
 scanf("%d",&n2);
 printf("Ingrese por favor el numero de columnas de la matriz 2\n");
 scanf("%d",&x2);
 if (n1==n2 && x1==x2) {
   printf(" Matriz 1\n");
   dt(arg,n1,x1);
   printf("Matriz 2\n");
   dta(rb,n2,x2);
   printf(" Al sumar las matrices el resultado es: \n");
   sdm(rb,n1,x1);
   printf("\n");
 } else {
   printf("Mal los datos\n");
}
break;
case 8:
printf("Por favor ingrese el numero de filas de la matriz 1\n");
scanf("%d",&n1);
printf("Ingrese por favor el numero de columnas de la matriz 1\n");
scanf("%d",&x1);

printf("Por favor ingrese el numero de filas de la matriz 2\n");
scanf("%d",&n2);
printf("Ingrese por favor el numero de columnas de la matriz 2\n");
scanf("%d",&x2);
if (n1==x2) {
  printf(" Matriz 1\n");
  dt(arg,n1,x1);
  printf("Matriz 2\n");
  dta(a,n2,x2);
  printf(" Al multiplicar el resultado es: \n");
  y(rb,n1,x1);
  printf("\n");
} else {
  printf("Mal los datos\n");
}
break;
}
return 0;
}
int dgl  (int*agl,int d){
  for (k=1;k<=d;k++){
   printf ("numero [%d] ",k);
   scanf ("%d",&agl[k]);
}
   printf("\n");
}
int dimp (int*agl,int d){
  for (k=1;k<=d;k++){
    printf("posicion [%d] %d\n",k,agl [k]);
  }
  }
  int dtor(int *agl, int d){
    int k;
    for(k=1; k<=d; k++){
    agl[k]=1+rand()%100;
    }
  }
  int nale(int *agl, int d){
    int k;
    for(k=1; k<=d; k++){
    dtor(agl,d);
    printf("posicion [%d]: %d\n",k,agl[k]);
    }
  }
  int sagl (int*agl,int d){
    for (k=1;k<=d;k++){
    agl[k]=agl1[k]+agl2[k];
     printf ("La suma es[%d]:%d\n",k,agl[k]);
   }
  }
  int suagl(int*agl,int d){
  for (v=1; v<=d ;v++){
    suma=suma+agl1[v];

  }
    printf("%d",suma);
  }
  int dmz (int arg[][100], int g, int z){
    for(v=1; v<=g; v++)
      for(k=1; k<=z; k++){
      printf("Orden [%d][%d] => ",v,k);
      scanf("%d",&arg[v][k]);
    }
  }
  int mat (int arg[][100], int g, int z){
    for(v=1; v<=g; v++){
      printf("\n");
      for(k=1; k<=z; k++)
      printf(" %d",arg[v][k]);
      printf("\n");
    }
  }
  int amtrz(int arg[][100], int g, int z){
    for(v=1; v<=g; v++){
      printf("\n");
      for(k=1; k<=z; k++){
      arg[v][k]=1+rand()%100;
      printf(" %d",arg[v][k]);
    }
  }
  }
  int dt(int arg[][100], int n1, int x1){
    for(v=1; v<=n1; v++)
      for(k=1; k<=x1; k++){
      printf("Orden [%d][%d] => ",v,k);
      scanf("%d",&arg[v][k]);
    }
  }
  int dta(int a[][100], int n2, int x2){
    for(v=1; v<=n2; v++)
      for(k=1; k<=x2; k++){
      printf("Orden [%d][%d] => ",v,k);
      scanf("%d",&a[v][k]);
    }
  }
  int sdm(int rb[][100], int n1, int x1){
    for(v=1; v<=n1; v++)
    for(k=1; k<=x1; k++)
    rb[v][k]=arg[v][k]+rb[v][k];
    for(v=1; v<=n1; v++){
      printf("\n");
      for(k=1; k<=x2; k++)
      printf(" %d", rb[v][k]);
      printf ("\n");
    }
  }
  int y(int rb[][100], int n1, int x1){
    int i,k,acumulador,contador;
    for(v=1; v<=n1; v++)
    for(k=1; k<=x1; k++){
    for(acumulador=0, contador=0; contador<=x1; contador++)
    acumulador=acumulador+arg[v][contador]*a[contador][k];
    rb[v][k]=acumulador;
  }
  for(v=1; v<=n1;v++){
    printf("\n");
  for(k=1; k<=n2;k++)
  printf("  %d",rb[v][k]);
  }
  }

