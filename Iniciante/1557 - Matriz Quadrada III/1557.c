#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
        
    while(scanf("%d", &n)){
        
        if(n == 0) break; 
        
        int k, l; 
        int matriz[n][n];
        
        k = l = 1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matriz[i][j] = l;
                l *= 2;
            }
            k *= 2; 
            l = k; 
        }
        
        int maior, digitos;
        maior = matriz[n-1][n-1]; 
        digitos = 0; 
        
        while(maior != 0){
            maior /= 10;
            digitos++; 
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == 0){
                    printf("%*d", digitos, matriz[i][j]);
                }
                else{
                    printf("%*d", digitos+1, matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
