#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long long num;
    
    scanf("%llu", &num); 
    
    while(num > 0){
        
        printf("%llu", num % 10);
        
        num/=10;
    }
    
    printf("\n"); 
    
    return 0;
}
