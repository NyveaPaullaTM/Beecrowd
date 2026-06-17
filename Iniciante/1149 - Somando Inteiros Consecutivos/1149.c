#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, n, soma;
    soma = 0; 
    
    scanf("%d", &a); 
    
    do{
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++){
            soma += a+i; 
        }
        
    }while(n <= 0);
    
            
    printf("%d\n", soma);
    
    return 0;
}
