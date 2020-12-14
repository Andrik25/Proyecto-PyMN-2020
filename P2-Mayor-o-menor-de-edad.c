//Mayor o menor de edad 
#include <stdio.h>
int main(){
    int edad;
//Solicitar la edad 

    printf("Hola, ingresa tu edad: \n" );
    scanf("%d", &edad);
    if (edad>=18){
        
        //Presentar los resultados
        printf("Eres mayor de edad");
    }else{
        printf("Eres menor de edad");
    }
    }

