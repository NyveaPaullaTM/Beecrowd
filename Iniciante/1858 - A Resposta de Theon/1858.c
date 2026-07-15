#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, num, menor, pos;
    menor = 21;
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        
        if(num < menor){
            menor = num;
            pos = i; 
        }
    }
    
    printf("%d\n", pos); 
    
    return 0;
}
