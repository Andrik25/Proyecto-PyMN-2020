//Métodos cerrados (Andrik)
#include <stdio.h>
#include <math.h>
float fn1 (float x_in);

float fn2 (float x_in);

float ri (float z, float w);

float op (float q, float f);

float eo (float q, float f);

float eor (float q, float f);

float f, q, w, z;

int fun, h, md;

int
main ()
{
  
printf
    ("Hola. Favor de ingresar el tipo de metodo para realizar la funcion deseada \n");
  
printf ("Selecciona la opcion: 1. Biseccion    o     2. Regla falsa\n");
  
scanf ("%d", &md);
  
switch (md)
    {
    
case 1:
      
printf ("Cantidad de iteraciones\n");
      
scanf ("%d", &fun);
      
printf ("\n");
      
q = -3;
      
f = -2;
      
w = 0;
      
z = 0;
      
printf ("   i          Xi           a           b             E%\n");
      
for (h = 1; h <= fun; h++)
	{
	  
printf ("%d         %f    %f   %f     %f\n", h, op (q, f), q, f,
		   ri (z, w));
	  
if ((fn1 (q) * fn1 (op (q, f))) < 0)
	    {
	      
f = op (q, f);
	      
z = f;
	      
w = op (q, z);
	    
}
	  
	  else
	    {
	      
q = op (q, f);
	      
z = q;
	      
w = op (z, f);
	    
}
	
}
      
printf ("\n");
      
printf ("\n");
      
q = 1;
      
f = 2;
      
w = 0;
      
z = 0;
      
printf ("   i          Xi          a         b            E%\n");
      
for (h = 1; h <= fun; h++)
	{
	  
printf ("%d         %f    %f   %f     %f\n", h, op (q, f), q, f,
		   ri (z, w));
	  
if ((fn2 (q) * fn2 (op (q, f))) < 0)
	    {
	      
f = op (q, f);
	      
z = f;
	      
w = op (q, z);
	    
}
	  
	  else
	    {
	      
q = op (q, f);
	      
z = q;
	      
w = op (z, f);
	    
}
	
}
      
break;
    
case 2:
      
printf ("Cantidad de iteraciones\n");
      
scanf ("%d", &fun);
      
printf ("\n");
      
q = -3;
      
f = -2;
      
w = 0;
      
z = 0;
      
printf ("   i          Xi           a           b             E%\n");
      
for (h = 1; h <= fun; h++)
	{
	  
printf ("%d         %f    %f   %f     %f\n", h, eo (q, f), q, f,
		   ri (z, w));
	  
if ((fn1 (q) * fn1 (eo (q, f))) < 0)
	    {
	      
f = eo (q, f);
	      
z = f;
	      
w = eo (q, z);
	    
}
	  
	  else
	    {
	      
q = eo (q, f);
	      
z = q;
	      
w = eo (z, f);
	    
}
	
}
      
printf ("\n");
      
printf ("\n");
      
q = 1;
      
f = 2;
      
w = 0;
      
z = 0;
      
printf ("   i          Xi          a         b            E%\n");
      
for (h = 1; h <= fun; h++)
	{
	  
printf ("%d         %f    %f   %f     %f\n", h, eor (q, f), q, f,
		   ri (z, w));
	  
if ((fn2 (q) * fn2 (eor (q, f))) < 0)
	    {
	      
f = eor (q, f);
	      
z = f;
	      
w = eor (q, z);
	    
}
	  
	  else
	    {
	      
q = eor (q, f);
	      
z = q;
	      
w = eor (z, f);
	    
}
	
}
      
break;
    
}

}


float
fn1 (float x_in)
{
  
float fx;
  
fx = (2 * (x_in) * cos (2 * x_in)) - pow ((x_in + 1), 2);
  
return fx;

}


float
op (float r, float f)
{
  
float xi;
  
xi = ((q + f) / 2);
  
return xi;

}


float
fn2 (float x_in)
{
  
float fx;
  
fx = log (fabs (x_in)) + pow (x_in, 2) - 4;
  
return fx;

}


float
ri (float z, float w)
{
  
float epsilon;
  
epsilon = fabs ((w - z) / w) * 100;
  
return epsilon;

}


float
eo (float q, float f)
{
  
float xi;
  
xi = f - ((fn1 (f) * (q - f)) / (fn1 (q) - fn1 (f)));
  
return xi;

}


float
eor (float q, float f)
{
  
float xi;
  
xi = f - ((fn2 (f) * (q - f)) / (fn2 (q) - fn2 (f)));
  
return xi;

}

