#include <stdio.h>

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        int qtd, num;
        qtd = 0;
        
        for(int i = 0; i < n; i++){
            scanf("%d", &num); 
            
            if(num == 1) qtd++;
        }
        
        if(qtd >= ((double)2/3)*n) printf("impeachment\n");
        else printf("acusacao arquivada\n"); 
    }
    
    return 0;
}
