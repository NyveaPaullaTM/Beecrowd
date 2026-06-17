#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, cont;
    cont = 1;
    
    scanf("%d %d", &a, &b);
    
    for(int i = 1; i <= b; i++){
        if(cont == a){
            printf("%d\n", i);
            
            cont = 1;
        }
        else{
            printf("%d ", i);
            
            cont++;
        }
    }
    
    return 0;
}
