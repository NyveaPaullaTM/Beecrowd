#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, num, pos, menor;;
    
    scanf("%d", &n);
    
    scanf("%d", &num);
    menor = num;
    pos = 0;
    
    for(int i = 1; i < n; i++){
        scanf("%d", &num);
        
        if(num < menor){
            menor = num;
            pos = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    
    return 0;
}
