#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num;
    
    scanf("%d", &num);
    
    if(num%2 == 0){
        num++; 
    }
    
    for(i = 0; i < 6; i++){
        printf("%d\n", num);
        num += 2;  
    }
    
    return 0; 
}
