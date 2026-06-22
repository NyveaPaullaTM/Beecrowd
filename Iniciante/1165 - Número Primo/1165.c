#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, n, x;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        
        scanf("%d", &x);
        
        for(j = 2; j < x; j++){
            if(x%j == 0){
                printf("%d nao eh primo\n", x);
                
                break;
            }
        }
        
        if(j == x){
            printf("%d eh primo\n", x);
        }
    }
    
    return 0;
}
