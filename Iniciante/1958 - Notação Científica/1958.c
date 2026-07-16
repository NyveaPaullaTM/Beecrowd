#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char num[111];
    char sinal, mantissa;
    int tam;
    
    scanf("%s", num); 
    tam = strlen(num); 
    
    if(num[0] == '-'){
        sinal = '-';
        mantissa = num[1];
    }
    else{
        sinal = '+';
        mantissa = num[0]; 
    }
    
    for(int i = 0; i < tam; i++){
        
    }
    
    return 0;
}
