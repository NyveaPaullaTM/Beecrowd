#include <stdio.h>
#include <stdlib.h>

int main(){
    double m, soma;
    char t;
    soma = 0; 

    scanf("%c", &t);
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &m);
            
            if((j > i)&&(j < 11-i)){
                soma += m; 
            }
        }
    }
    
    if(t == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/30);
    }
    
    return 0;
}
