#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, limiar;
    
    scanf("%d", &num);
    
    limiar = 3*num + num; 
    
    for(int i = 1; i < limiar; i += 4){
        printf("%d ", i);
        printf("%d ", i+1);
        printf("%d ", i+2);
        printf("PUM\n"); 
    }
    
    return 0;
}
