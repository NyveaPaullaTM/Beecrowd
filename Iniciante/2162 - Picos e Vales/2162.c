#include <stdio.h>

int main(){
    int n, valor, anterior, pico, vale;
    pico = vale = 0; 
    
    scanf("%d", &n);
    scanf("%d", &anterior); 
    
    n--; 
    while(n--){
        scanf("%d", &valor);
        
        if(valor == anterior){
            printf("0\n");
            return 0; 
        }
        else if(valor < anterior){
            if(vale){
                printf("0\n");
                return 0; 
            }
            pico = 0;
            vale = 1;
        }
        else{
            if(pico){
                printf("0\n");
                return 0; 
            }
            pico = 1;
            vale = 0;            
        }
        
        anterior = valor; 
    }
    
    printf("1\n"); 
    
    return 0;
}
