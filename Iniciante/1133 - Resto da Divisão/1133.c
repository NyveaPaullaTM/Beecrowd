#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b); 
    
    if(a > b){
        int aux;
        aux = b;
        b = a;
        a = aux; 
    }
    
    for(int i = a+1; i < b; i++){
        if((i%5 == 2)||(i%5 == 3)){
            printf("%d\n", i); 
        }
    }
    
    return 0;
}
