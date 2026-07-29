#include <stdio.h>
#include <string.h>


int main(){
    char sequencia[40], numero[40], caso;
    caso = 1; 
    
    while(scanf("%s", sequencia) != EOF){
        int qtd, pos, tam_s, tam_n;
        qtd = pos = 0;
        
        scanf("%s", numero);
        
        tam_s = strlen(sequencia);
        tam_n = strlen(numero); 
        
        int i, j;
        for(i = 0; i < tam_n; i++){
            if(numero[i] == sequencia[0]){
                for(j = 0; j < tam_s; j++){
                    if(numero[i+j] != sequencia[j]) break;
                }
                
                if(j == tam_s){
                    pos = i+1;
                    qtd++;
                }
            }
        }
        
        printf("Caso #%d:\n", caso); 
        
        if(qtd > 0){
            printf("Qtd.Subsequencias: %d\n", qtd);
            printf("Pos: %d\n\n", pos); 
        }
        else{
            printf("Nao existe subsequencia\n\n"); 
        }
        
        caso++;
    }
    
    return 0;
}
