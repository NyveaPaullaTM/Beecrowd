#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, z, cont;
    cont = 1; 
    
    scanf("%d", &x); 
    
    do{
        scanf("%d", &z);
    }while(z <= x);
    
    for(int i = x+1; i < z; i++){
        cont++;
        
        x += i;
        
        if(x > z) break;
    }
    
    printf("%d\n", cont++); 
    
    return 0;
}
