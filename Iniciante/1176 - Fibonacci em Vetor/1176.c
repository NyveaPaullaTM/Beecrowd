#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, n;
    unsigned long long f[61];
    
    f[0] = 0;
    f[1] = 1;
    
    for(int i = 2; i <= 60; i++){
        f[i] = f[i-1] + f[i-2]; 
    }
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        printf("Fib(%d) = %llu\n", n, f[n]); 
    }
    
    return 0;
}
