#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c); 
    
    if((a > b)&&(a > c)){
        if(a > sqrt(b*b + c*c)){
            printf("Invalido\n");
            return 0; 
        }
    }
    else if((b > a)&&(b > c)){
        if(b > sqrt(a*a + c*c)){
            printf("Invalido\n");
            return 0; 
        }
    }
    else if((c > a)&&(c > b)){
        if(c > sqrt(a*a + b*b)){
            printf("Invalido\n");
            return 0; 
        }
    }
    
    if((a == b)&&(a == c)){
        printf("Valido-Equilatero\n");
        printf("Retangulo: N\n"); 
    
        return 0;
    }
    
    if(a == b){
        printf("Valido-Isoceles\n");
        
        if(c == sqrt(a*a + b*b)) printf("Retangulo: S\n"); 
        else printf("Retangulo: N\n"); 
        
        return 0;
    }
    else if(a == c){
        printf("Valido-Isoceles\n");
        
        if(b == sqrt(a*a + c*c)) printf("Retangulo: S\n"); 
        else printf("Retangulo: N\n"); 
        
        return 0;
    }
    else if(b == c){
        printf("Valido-Isoceles\n");
        
        if(a == sqrt(b*b + c*c)) printf("Retangulo: S\n"); 
        else printf("Retangulo: N\n"); 
        
        return 0; 
    }
    
    printf("Valido-Escaleno\n");
    
    if((a == sqrt(b*b + c*c))||(b == sqrt(a*a + c*c))||(c == sqrt(a*a + b*b))) printf("Retangulo: S\n"); 
    else printf("Retangulo: N\n"); 
    
    return 0; 
}
