#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, x;
    x = 0;
    
    scanf("%d", &t); 
    
    for(int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, x);
        
        if(x == t-1) x = 0;
        else x++; 
    }
    
    return 0;
}
