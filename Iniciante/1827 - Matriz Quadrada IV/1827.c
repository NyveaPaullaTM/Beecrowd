#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
    
        int matriz[n][n]; 
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((i == n/2)&&(j == i)){
                    matriz[i][j] = 4;
                }        
                else if(((i >= n/3)&&(j >= n/3))&&((i < n-n/3)&&(j < n-n/3))){
                    matriz[i][j] = 1;
                }
                else if(j == n-i-1){
                    matriz[i][j] = 3; 
                }
                else if(i == j){
                    matriz[i][j] = 2;
                }
                else{
                    matriz[i][j] = 0; 
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%d", matriz[i][j]); 
            }
            printf("\n");
        }
        printf("\n"); 
    }
    
    return 0;
}
