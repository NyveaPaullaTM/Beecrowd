#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    
    scanf("%d", &n); 
    
    for(int i = 1; i <= n; i++){
        char e1[10], e2[10];
        
        scanf("%s %s", e1, e2);
        
        if(!strcmp(e1, "pedra")){
            if(!strcmp(e2, "lagarto") || !strcmp(e2, "tesoura")) printf("Caso #%d: Bazinga!\n", i); 
            else if(!strcmp(e2, "pedra")) printf("Caso #%d: De novo!\n", i);
            else printf("Caso #%d: Raj trapaceou!\n", i); 
        }
        else if(!strcmp(e1, "papel")){
            if(!strcmp(e2, "pedra") || !strcmp(e2, "Spock")) printf("Caso #%d: Bazinga!\n", i);
            else if(!strcmp(e2, "papel")) printf("Caso #%d: De novo!\n", i);
            else printf("Caso #%d: Raj trapaceou!\n", i);    
        }
        else if(!strcmp(e1, "tesoura")){
            if(!strcmp(e2, "papel") || !strcmp(e2, "lagarto")) printf("Caso #%d: Bazinga!\n", i);
            else if(!strcmp(e2, "tesoura")) printf("Caso #%d: De novo!\n", i);
            else printf("Caso #%d: Raj trapaceou!\n", i);               
        }
        else if(!strcmp(e1, "lagarto")){
            if(!strcmp(e2, "Spock") || !strcmp(e2, "papel")) printf("Caso #%d: Bazinga!\n", i);
            else if(!strcmp(e2, "lagarto")) printf("Caso #%d: De novo!\n", i);
            else printf("Caso #%d: Raj trapaceou!\n", i);                
        }
        else{
            if(!strcmp(e2, "tesoura") || !strcmp(e2, "pedra")) printf("Caso #%d: Bazinga!\n", i);
            else if(!strcmp(e2, "Spock")) printf("Caso #%d: De novo!\n", i);
            else printf("Caso #%d: Raj trapaceou!\n", i);              
        }
    }
    
    return 0;
}
