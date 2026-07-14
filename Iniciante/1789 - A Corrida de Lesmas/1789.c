#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        int l, maior;
        maior = 0; 
        
        while(n--){
            scanf("%d", &l); 
            
            if(l > maior){
                maior = l; 
            }
        }   
        
        if(maior >= 20){
            printf("3\n");
        }
        else if(maior >= 10){
            printf("2\n");
        }
        else{
            printf("1\n"); 
        }
    }
    
    return 0;
}
