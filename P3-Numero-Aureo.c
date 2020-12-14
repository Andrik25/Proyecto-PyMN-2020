//Numero Aureo (Andrik)
#include <stdio.h>
double N,J,A=0,B=1,C=1,AUREO;
int main (){
    printf("Hola, por favor ingrese el numero de iteraciones\n");
    scanf("%lf", &N);
    printf("1, ");
    for (J=1; J<N; J++){
        C = A + B;
        A = B;
        B = C;
        printf("%1.01f , ", C);
        
    }
    AUREO = C / A;
    printf("El NUMERO AUREO ES: %1f \n ", AUREO);
    return 0;
    
}

