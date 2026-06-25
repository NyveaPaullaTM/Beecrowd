#include <stdio.h>
#include <stdlib.h>

int main(){
    int par[5], impar[5];
    int num, leu_par, leu_impar;
    leu_par = leu_impar = 0;
    
    for(int i = 0; i < 15; i++){
        
        if(leu_par == 5){
            for(int j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, par[j]);
            }
            
            leu_par = 0;
        }
        
        if(leu_impar == 5){
            for(int j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            
            leu_impar = 0; 
        }
        
        scanf("%d", &num);
        
        if(num%2 == 0){
            par[leu_par] = num;
            leu_par++;
        }
        else{
            impar[leu_impar] = num;
            leu_impar++; 
        }
    }
    
    if(leu_impar != 0){
        for(int i = 0; i < leu_impar; i++){
            printf("impar[%d] = %d\n", i, impar[i]);            
        }
    }
    if(leu_par != 0){
        for(int i = 0; i < leu_par; i++){
            printf("par[%d] = %d\n", i, par[i]);            
        }
    }
    
    return 0;
}
