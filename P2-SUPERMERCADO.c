//SUPERMERCADO (ANDRIK)
#include <stdio.h>
int main ()
{
    int cantbolsas;
    float costodelProducto,porcentDesc,descuento,tarFinal,costodeBolsas;
    char dep;
    printf("Departamentos:\n");
    printf("P) Perfumeria\n");
    printf("S) Salchichoneria\n");
    printf("C) Carniceria\n");
    printf("L) Limpieza\n");
    printf("A que departamento pertenece el producto que compraras? opcion (p,s,c,l):");
    scanf("%c",&dep);
    printf("Dame el costo del producto: ");
    scanf("%f",&costodelProducto);    
    printf("Cantidad de bolsas que deseas: ");
    scanf("%d",&cantbolsas);
    switch (dep)
    {
    	case 'p':
    	          porcentDesc=0.20;
    	          break;
    	case 's': 
    	          porcentDesc=0.40;
    	          break;
    	case 'c':
    		      porcentDesc=0.20;
    	          break;
    	case 'l':
    		      porcentDesc=0.35;
    	          break;
	}
    descuento=costodelProducto*porcentDesc;
    costodeBolsas= cantbolsas*0.10;
    tarFinal= costodelProducto - descuento + costodeBolsas;
    printf("\nCosto producto: %.2f",costodelProducto);
    printf("\nDescuento: %.2f",descuento);
    printf("\nCosto de las bolsas: %.2f",costodeBolsas);
    printf("\nTarifa final: %.2f",tarFinal);
	return 0;
}

