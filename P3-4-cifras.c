//4 cifras (Andrik)
#include<stdio.h>
int G,S,U,P,J,A,E,L;
int main (){
    do{
printf("Hola, por favor ingrese 4 cifras de numeros no repetidos \n");
scanf("%d",&G);
U=G%10;

S=G-U;
S=S%100;
P=S/10;

A=G-P-U;
A=A%1000;
J=A/100;

L=G-J-P-U;
E=L/1000;

}

while (G<999 && G>10000);
if (P!=U && P!=E && U!=E && U!=J && J!=P && J!=E){
    printf("EL CODIGO ES VALIDO \n");
    printf("\n");
    
}

else{
    printf("EL CODIGO NO ES VALIDO \n");
    return 0;
    
}
}

