#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    
    do{
        scanf("%d", &a);
        
        if(a == 0) return 0; 
        
        for(int i = 1; i < a; i++){
            printf("%d ", i);
        }
        printf("%d\n", a); 
        
    }while(a != 0);
    
    return 0;
}
