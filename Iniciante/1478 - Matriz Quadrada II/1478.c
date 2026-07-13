#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
        
    while(scanf("%d", &n)){
        
        if(n == 0) break; 
        
        int k, l, fim;
        int matriz[n][n];
        k = 0; 
        fim = n; 
        
        while(1){
            for(int i = 0; i < fim; i++){
                matriz[i+k][k] = i+1;
                matriz[k][i+k] = i+1; 
            }
            k++; 
            fim--; 
            
            if(k == n) break; 
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
