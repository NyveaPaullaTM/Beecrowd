#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, soma;
    
    do{
        soma = 0;
        
        scanf("%d", &n);
        
        if(n == 0) break;
        if(n%2 != 0) n++; 
        
        for(int i = 0; i < 5; i++){
            soma += n;
            
            n+=2;
        }
        
        printf("%d\n", soma);
        
    }while(n != 0);
    
    return 0;
}
