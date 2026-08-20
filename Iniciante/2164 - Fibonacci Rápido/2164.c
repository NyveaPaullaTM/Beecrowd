#include <stdio.h>
#include <math.h>

int main(){
    double raiz, a, b,resultado;
    int n;
    raiz = sqrt(5); 
    
    scanf("%d", &n);
    
    a = pow(((1+raiz)/2), n); 
    b = pow(((1-raiz)/2), n); 
    
    resultado = (a-b)/raiz; 
    
    printf("%.1lf\n", resultado); 
    
    return 0;
}
