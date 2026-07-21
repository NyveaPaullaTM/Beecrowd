#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, melhor;
    double nota, maior;
    melhor = maior = 0; 
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d %lf", &m, &nota);
        
        if(nota > maior){
            maior = nota;
            melhor = m;
        }
    }
    
    if(maior < 8){
        printf("Minimum note not reached\n");
    }
    else{
        printf("%d\n", melhor); 
    }
    
    return 0;
}
