#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num, maior, pos;
    maior = 0;
    
    for(i = 0; i < 100; i++){
        scanf("%d", &num);
        
        if(maior < num){
            maior = num;
            pos = i+1;
        }
    }
    
    printf("%d\n%d\n", maior, pos); 
}
