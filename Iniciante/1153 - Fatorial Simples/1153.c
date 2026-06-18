#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    if(num == 0){
        return 1;
    }    
    
    return num*fatorial(num-1);
}

int main(){
    int num;
    
    scanf("%d", &num);
    
    num = fatorial(num);
    
    printf("%d\n", num);
    
    return 0; 
}
