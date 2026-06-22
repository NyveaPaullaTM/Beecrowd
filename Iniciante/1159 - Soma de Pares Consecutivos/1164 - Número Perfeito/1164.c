#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, soma;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        soma = 0; 
        
        scanf("%d", &x);
        
        for(int j = 1; j < x; j++){
            if(x%j == 0){
                soma += j;
            }
        }
        
        if(soma == x){
            printf("%d eh perfeito\n", x);
        }
        else{            
            printf("%d nao eh perfeito\n", x);
        }
    }
    
    return 0;
}
