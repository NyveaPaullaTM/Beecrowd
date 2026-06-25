#include <stdio.h>
#include <stdlib.h>

int main(){
    double x;
    
    scanf("%lf", &x);
    
    printf("N[%d] = %.4lf\n", 0, x); 
    
    for(int i = 1; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, x/=2); 
    }
    
    return 0;
}
