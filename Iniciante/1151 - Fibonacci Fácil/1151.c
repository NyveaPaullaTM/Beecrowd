#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, atual, anterior;
    anterior = atual = 0;
    
    scanf("%d", &num);
    
    for(int i = 0; i < num-1; i++){
        printf("%d ", atual);
        
        if(atual == 0) atual = 1;
        else{
            int aux = atual;
            atual += anterior;
            anterior = aux; 
        }
    }
    
    printf("%d\n", atual);
    
    return 0; 
}
