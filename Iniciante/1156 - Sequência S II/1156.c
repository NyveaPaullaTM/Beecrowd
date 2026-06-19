#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j; 
    double s;
    s = 1;
    
    for(i = 3, j = 2; i <= 39; i+=2, j*=2){
        s += (double)i/j;
    }
    
    printf("%.2lf\n", s); 
    
    return 0; 
}
