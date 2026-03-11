#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, y;
    double resultado;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d %d", &x, &y);
        
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            resultado = (double)x/y;
            
            printf("%.1lf\n", resultado);
        }
    }
    return 0; 
}
