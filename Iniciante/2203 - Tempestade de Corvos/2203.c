#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int xf, yf, xi, yi, vi, r1, r2;
    
    while(scanf("%d %d %d %d %d %d %d", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF){
        double distancia;
        
        distancia = sqrt((abs(xi-xf)*abs(xi-xf)) + (abs(yi-yf)*(abs(yi-yf)))) + vi*1.5;
    
        if((r1 + r2) < distancia) printf("N\n");
        else printf("Y\n"); 
    }
    
    return 0;
}
