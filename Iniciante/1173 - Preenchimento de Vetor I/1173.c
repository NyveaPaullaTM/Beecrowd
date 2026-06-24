#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int v[10];
    
    scanf("%d", &n); 
    
    for(int i = 0; i < 10; i++){
        v[i] = n;
        n *= 2;
    }
    
    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, v[i]); 
    }
    
    return 0;
}
