#include <stdio.h>
#include <stdlib.h>

int main(){
    int l;
    double m, soma;
    char t;
    soma = 0; 
    
    scanf("%d", &l);
    scanf(" %c", &t);
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &m);
            
            if(i == l){
                soma += m; 
            }
        }
    }
    
    if(t == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/12);
    }
    
    return 0;
}
