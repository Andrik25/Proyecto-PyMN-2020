// ANDRIK (Derivacion numerica)
#include <stdio.h>
#include<math.h>

 float DerivAdelante (float y, float (xi));

float DerivAtras (float y, float (xi));

float DerivAcentrada (float y, float (xi));

 
float xi, y, o;

int
main () 
{
  
printf
    ("B?En que incremento desea imprimir resultados? \n y=0.5 \n y=0.2 \n y=0.1 \n y=0.01 \n");
  
scanf ("%f", &o);
  
 
xi = 0.6;
  y = o;
  
printf
    ("Hola, se va a calcular la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6\n");
  
printf ("El valor para h=%f es: %f \n", y, DerivAdelante (xi, y));
  
printf ("El valor para h=%f es: %f \n", y, DerivAtras (xi, y));
  
printf ("El valor para h=%f es: %f\n ", y, DerivAcentrada (xi, y));

 
} 
 
float

DerivAdelante (float y, float (xi))
{
  
float dfxi, fxi, fxip1, fxip2;
  
fxi = 1 - exp (-xi / 0.2);
  
fxip1 = 1 - exp (-(xi + y) / 0.2);
  
fxip2 = 1 - exp (-(xi + (2 * y)) / 0.2);
  
dfxi = (-fxip2 + 4 * fxip1 - 3 * fxi) / (2 * y);
  
return dfxi;

}


 
 
float
DerivAtras (float y, float (xi))
{
  
float dfxi, fxi, fxip1, fxip2;
  
fxi = 1 - exp (-xi / 0.2);
  
fxip1 = 1 - exp (-(xi - y) / 0.2);
  
fxip2 = 1 - exp (-(xi - y) / 0.2);
  
dfxi = (3 * fxi - 4 * fxip1 - fxip2) / (2 * y);
  
return dfxi;

}


 
float
DerivAcentrada (float y, float (xi))
{
  
float dfxi, fxi, fxip1, fxip2;
  
 
fxip1 = 1 - exp (-(xi + y) / 0.2);
  
fxip2 = 1 - exp (-(xi - y) / 0.2);
  
dfxi = (fxip1 - fxip2) / (2 * y);
  
return dfxi;

}

