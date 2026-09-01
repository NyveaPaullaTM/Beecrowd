#include <stdio.h>

int main(){
    unsigned long long p;
    
    while(1){
        scanf("%llu", &p);
        
        if(p == -1) return 0;
        
        if(p == 0) printf("0\n");
        else printf("%llu\n", p-1); 
    }
    
    return 0;
}
