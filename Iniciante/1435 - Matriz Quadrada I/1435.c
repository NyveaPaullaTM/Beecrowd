#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
        
    while(scanf("%d", &n)){
        
        if(n == 0) break; 
        
        int k, inicio, fim; 
        int matriz[n][n];
        
        k = 1;
        inicio = 0; 
        fim = n;
        
        while(1){
            for(int i = inicio; i < fim; i++){
                for(int j = inicio; j < fim; j++){
                    matriz[i][j] = k;
                }
            }
            k++; 
            inicio++;
            fim--; 
            
            if (fim == 0) break;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == 0){
                    printf("%3d", matriz[i][j]);
                }
                else{
                    printf(" %3d", matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
