#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;
    int n, i;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%f %f %f", &a, &b, &c);
        
        printf("%.1f\n", (2*a + 3*b + 5*c)/10);
    }
    
    return 0;
}
