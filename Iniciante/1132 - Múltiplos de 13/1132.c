#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, soma;
    soma = 0;
    
    scanf("%d %d", &a, &b); 
    
    if(a > b){
        int aux;
        aux = b;
        b = a;
        a = aux; 
    }
    
    for(int i = a; i <= b; i++){
        if(i%13 != 0){
            soma += i;
        }
    }
    
    printf("%d\n", soma); 
    
    return 0;
}
