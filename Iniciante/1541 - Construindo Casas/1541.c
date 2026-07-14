#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    
    while(1){
        scanf("%d", &a);
        
        if(a == 0) return 0; 
        
        scanf("%d", &b);
        scanf("%d", &c);
        
        int tam = a*b*100/c;
        tam = sqrt(tam); 
        
        printf("%d\n", tam); 
    }
    
    return 0;
}
