#include <stdio.h>
#include <string.h>

int main(){
    int t;
    
    while(1){
        scanf("%d", &t);
        if(t == 0) return 0; 
        
        int total = 0;
        int qtd;
        char coisa[20];
        
        for(int i = 0; i < t; i++){
            scanf("%d %[^\n]s", &qtd, coisa);
            
            if((strcmp(coisa, "suco de laranja")) == 0) total += qtd*120;
            else if((strcmp(coisa, "morango fresco")) == 0) total += qtd*85;
            else if((strcmp(coisa, "mamao")) == 0) total += qtd*85;
            else if((strcmp(coisa, "goiaba vermelha")) == 0) total += qtd*70;
            else if((strcmp(coisa, "manga")) == 0) total += qtd*56;
            else if((strcmp(coisa, "laranja")) == 0) total += qtd*50;
            else if((strcmp(coisa, "brocolis")) == 0) total += qtd*34;
        }
        
        if(total > 130) printf("Menos %d mg\n", total-130);
        else if(total < 110) printf("Mais %d mg\n", 110-total);
        else printf("%d mg\n", total); 
    }
    
    
    return 0;
}
