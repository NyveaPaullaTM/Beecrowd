#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    char s1[10], s2[10]; 
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%s", s1);
        scanf("%s", s2);
        
        if(!strcmp(s1, "ataque")){
            if(!strcmp(s2, "ataque")) printf("Aniquilacao mutua\n");
            if(!strcmp(s2, "pedra")) printf("Jogador 1 venceu\n");
            if(!strcmp(s2, "papel")) printf("Jogador 1 venceu\n");
        }
        else if(!strcmp(s1, "pedra")){
            if(!strcmp(s2, "ataque")) printf("Jogador 2 venceu\n");
            if(!strcmp(s2, "pedra")) printf("Sem ganhador\n");
            if(!strcmp(s2, "papel")) printf("Jogador 1 venceu\n");            
        }
        else{
            if(!strcmp(s2, "ataque")) printf("Jogador 2 venceu\n"); 
            if(!strcmp(s2, "pedra")) printf("Jogador 2 venceu\n");
            if(!strcmp(s2, "papel")) printf("Ambos venceram\n");            
        }
    }
    
    return 0;
}
