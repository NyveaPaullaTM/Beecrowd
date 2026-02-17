#include <stdio.h>
#include <stdlib.h>


int main(){
    double a, b, c, resultado;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if((a+b > c)&&(b+c > a)&&(a+c > b)){
        resultado = a+b+c;
        
        printf("Perimetro = %.1lf\n", resultado); 
    }
    else{
        resultado = ((a+b)*c)/2;
        
        printf("Area = %.1lf\n", resultado); 
    }
    
    return 0;
}