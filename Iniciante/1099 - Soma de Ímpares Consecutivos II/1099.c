#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, y, i, soma;
    
    scanf("%d", &n);
    
    while(n--){
        soma = 0;
        
        scanf("%d %d", &x, &y);
        
        if(x > y){
            if(y%2 != 0){
                y += 1;
            }
            
            for(i = y+1; i < x; i+=2){
                soma += i;
            }
        }
        else{
            if(x%2 != 0){
                x += 1;
            }
            for(i = x+1; i < y; i+=2){
                soma += i;
            }
        }        
        
        printf("%d\n", soma); 
    }
    
    return 0; 
}
