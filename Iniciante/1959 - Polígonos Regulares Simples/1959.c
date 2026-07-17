#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, l;
    long long unsigned int v;
    v = 0; 
    
    scanf("%d %d", &n, &l);
    
    while(n--){
        v+=l;
    }
    
    printf("%llu\n", v); 
    
    return 0;
}
