#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int matriz[n+1][n+1];
    
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    char esquina[n][n];
    int luz = 0; 
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] == 1) luz++;
            if(matriz[i][j+1] == 1) luz++;
            if(matriz[i+1][j] == 1) luz++;
            if(matriz[i+1][j+1] == 1) luz++;
            
            if(luz >= 2) esquina[i][j] = 'S';
            else esquina[i][j] = 'U';
            
            luz = 0; 
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c", esquina[i][j]);
        }
        printf("\n");
    }
    
    return 0;   
}
