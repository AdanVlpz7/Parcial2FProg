/*
En un videoclub se ofrece la promoción de llevarse tres películas por el precio de las dos más baratas. 
Haga un programa que, dados los tres precios de las películas, determine la cantidad a pagar. 

*/
#include <stdio.h>

int main() {    
    int p1,p2,p3;
    int total = 0;
    printf("Introduzca el precio de la primer "  "pelicula\n");
    scanf("%d",&p1);
    printf("Introduzca el precio de la segunda pelicula" ": \n");
    scanf("%d",&p2);
    printf("Introduzca el precio de la tercer"
        " pelicula: \n");
    scanf("%d",&p3);
    
    //primera comprobacion
    if(p1 < p2 && p1 < p3){
        total += p1;
        if(p2 < p3)
            total += p2;
        else
            total += p3;
    }
    
    //segunda comprobacion
    if(p2 < p1 && p2 < p3){
        total += p2;
        if(p1 < p3)
            total += p1;
        else
            total += p3;
    }
    
    //tercera comprobacion
    if(p3 < p2 && p3 < p1){
        total += p3;
        if(p2 < p1)
            total += p2;
        else
            total += p1;
    }
    printf("\n El total fue: %d \n",total);
}
  
