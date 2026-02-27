#include <stdio.h>
#include <stdlib.h>

int main(){
    double a, b, c, aux;
    
    scanf("%lf %lf %lf", &a, &b, &c); 
    
    while((a < b)||(b < c)){
        while(b < c){
            aux = c;
            c = b;
            b = aux;
        }
        aux = b;
        b = a;
        a = aux;
    }
    
    if(a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((a*a) == ((b*b) + (c*c))){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((a*a) > ((b*b) + (c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((a*a) < ((b*b) + (c*c))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((a == b)&&(b == c)){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(((a == b)&&(b != c))||((b == c)&&(b != a))||((a == c)&&(b != a))){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0; 
}
