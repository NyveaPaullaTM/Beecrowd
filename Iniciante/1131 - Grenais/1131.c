#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, g, total, total_i, total_g, total_e, novo;
    i = g = total = total_i = total_g = total_e = 0; 
    
    while(1){
        scanf("%d", &i);
        scanf("%d", &g); 
        
        if(i > g){
            total_i++;
        }
        else if(g > i){
            total_g++;
        }
        else{
            total_e++; 
        }
        
        total++; 
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo);
        
        if(novo != 1){
            break; 
        }
    }
    
    printf("%d grenais\n", total);
    printf("Inter:%d\n", total_i);
    printf("Gremio:%d\n", total_g);
    printf("Empates:%d\n", total_e); 
    
    if(total_i > total_g){
        printf("Inter venceu mais\n"); 
    }
    else if(total_g > total_i){
        printf("Gremio venceu mais\n"); 
    }
    else{
        printf("Nao houve vencedor\n");
    }
    
    return 0; 
}
