#include <stdio.h>
#include <math.h>

int main(){
    double n, min, max;
    
    scanf("%lf", &n); 
    
    min = n/log(n);
    max = 1.25506*min;
    
    printf("%.1lf %.1lf\n", min, max); 
    
    return 0; 
}
