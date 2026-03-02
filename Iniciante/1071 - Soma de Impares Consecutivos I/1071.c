#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, y, soma;
    
    soma = 0;
    
    scanf("%d %d", &x, &y);
    
    for(i = y+1; i < x; i++){
        if(i%2 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);
    
    return 0; 
}
