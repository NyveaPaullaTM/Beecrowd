#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar(const void *a, const void *b){
    return strcmp((const char *)a, (const char *)b);
}

int main(){
    int t;
    
    while(scanf("%d", &t) != EOF){
        int expressao[t][3], indice; 
        
        for(int i = 0; i < t; i++){
            scanf("%d %d=%d", &expressao[i][0], &expressao[i][1], &expressao[i][2]);
        }
        
        char nome[51], errou[50][51]; 
        char operacao;         
        int qtd, k;
        qtd = k = 0;
    
        for(int i = 0; i < t; i++){
            scanf("%s %d %c", nome, &indice, &operacao);
            
            if(operacao == '+'){
                if((expressao[indice-1][0] + expressao[indice-1][1]) == expressao[indice-1][2]) qtd++;
                else{
                    strcpy(errou[k], nome);
                    k++; 
                }
            }
            else if(operacao == '-'){
                if((expressao[indice-1][0] - expressao[indice-1][1]) == expressao[indice-1][2]) qtd++;
                else{
                    strcpy(errou[k], nome);
                    k++; 
                }             
            }
            else if(operacao == '*'){
                if((expressao[indice-1][0]*expressao[indice-1][1]) == expressao[indice-1][2]) qtd++;
                else{
                    strcpy(errou[k], nome);
                    k++; 
                }                  
            }
            else{
                if(((expressao[indice-1][0] + expressao[indice-1][1]) != expressao[indice-1][2])&&
                ((expressao[indice-1][0] - expressao[indice-1][1]) != expressao[indice-1][2])&&
                ((expressao[indice-1][0]*expressao[indice-1][1]) != expressao[indice-1][2])) qtd++;
                else{
                    strcpy(errou[k], nome);
                    k++; 
                }      
            }
        }

        if(qtd == t) printf("You Shall All Pass!\n");
        else if(k == t) printf("None Shall Pass!\n"); 
        else{
            qsort(errou, k, sizeof(char)*51, comparar);

            printf("%s", errou[0]);
            for(int i = 1; i < k; i++){
                printf(" %s", errou[i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
