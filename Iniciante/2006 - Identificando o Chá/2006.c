#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, x, certo;
    certo = 0;
    
    scanf("%d", &t);
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &x);
        
        if(x == t) certo++;
    }
    
    printf("%d\n", certo); 
    
    return 0;
}
