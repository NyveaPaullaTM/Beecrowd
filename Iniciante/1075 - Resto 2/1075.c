#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, mod2;
    
    scanf("%d", &n);
    
    for(i = 1; i < n; i++){
        if(i%n == 2){
            mod2 = i;
            break;
        }
    }
    
    for(i = mod2; i < 10000; i+=n){
        printf("%d\n", i);
    }
    
    return 0;
}
