#include <stdio.h>
#include <stdlib.h>

int main(){
    double media, a, b;
    
    do{
        scanf("%lf", &a);
        
        if((a < 0)||(a > 10)) printf("nota invalida\n");
        
    }while((a < 0)||(a > 10)); 
    
    do{
        scanf("%lf", &b);
        
        if((b < 0)||(b > 10)) printf("nota invalida\n");
        
    }while((b < 0)||(b > 10)); 
    
    printf("media = %.2lf\n", (a+b)/2); 
    
    return 0;
}
