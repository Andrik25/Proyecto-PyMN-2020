//Ecuacion Cuadratica (4.3)
#include <stdio.h>
#include<math.h>
double a1, b1, c1, disc;
double cuadratica (double a, double b, double c);
int main(){
    printf("Ingrese el coeficiente a de la ecuacion cuadratica\n");
    scanf("%1f", &a1);
    printf("Ingrese el coeficiente b de la ecuacion cuadratica\n");
    scanf("%1f", &b1);
    printf("Ingrese el coeficiente c de la ecuacion cuadratica\n");
    scanf("%1f", &c1);
    disc = pow(b1,2)-4*a1*c1;
    if(disc<0){
    printf("No se tiene soluciones reales\n");
    }
    else{
    printf("Las soluciones de la cuadratica son: %1.1lf \t %1.1lf", cuadratica(a1,b1,c1));
    }
}
double cuadratica(double a, double b, double c){
    double disc,x1,x2;
     disc = pow(b1,2)-4*a1*c1;
     x1 = -b1+sqrt(disc)/(2*a1);
     x2 = --b1-sqrt(disc)/(2*a1);
     return x1, x2;
     
}

