#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, caso;
    caso = 1; 
    
    while(scanf("%d", &n) != EOF){
        int numeros = 1;
        
        for(int i = 1; i <= n; i++){
            numeros += i;
        }
        
        if(n > 0){
            printf("Caso %d: %d numeros\n", caso, numeros);
        }
        else{
            printf("Caso %d: %d numero\n", caso, numeros);
        }
        
        printf("0");
        
        for(int i = 0; i <= n; i++){
            for(int j = 0; j < i; j++){
                printf(" %d", i);
            }
        }
        printf("\n\n");
        
        caso++; 
    }
    
    return 0;
}
