#include <stdio.h>

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        int expoente = 0;
        
        while(n >>= 1) expoente++; 
        
        printf("%d\n", expoente);
    }
    
    return 0;
}
