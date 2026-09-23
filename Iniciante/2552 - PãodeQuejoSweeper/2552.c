#include <stdio.h>

int main(){
    int n, m;
    
    while(scanf("%d %d", &n, &m) != EOF){
        int matriz[n][m];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &matriz[i][j]); 
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(matriz[i][j] == 1) printf("9");
                else{
                    int qtd = 0; 
                    
                    if((i > 0)&&(matriz[i-1][j] == 1)) qtd++;  
                    if((j > 0)&&(matriz[i][j-1] == 1)) qtd++;  
                    if((i < n-1)&&(matriz[i+1][j] == 1)) qtd++;  
                    if((j < m-1)&&(matriz[i][j+1] == 1)) qtd++; 
                    
                    printf("%d", qtd); 
                }
            }
            printf("\n"); 
        }
    }

    return 0;
}
