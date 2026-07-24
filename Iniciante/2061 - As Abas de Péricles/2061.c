#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char clique[10];
    int abas, acoes;
    
    scanf("%d %d", &abas, &acoes);
    
    while(acoes--){
        scanf("%s", clique);
        
        if(clique[0] == 'f') abas ++;
        else abas--; 
    }
    
    if(abas >= 0) printf("%d\n", abas);
    else printf("0\n"); 
    
    return 0;
}
