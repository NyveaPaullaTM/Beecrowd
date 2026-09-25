#include <stdio.h>
#include <string.h>

int main(){
    int t, r, g, b, resultado;
    char tipo[10]; 
    
    scanf("%d", &t);
    
    for(int i = 1; i <= t; i++){
        scanf(" %s", tipo); 
        scanf("%d %d %d", &r, &g, &b); 
        
        if(strcmp(tipo, "eye") == 0){
            resultado = 30*r + 59*g + 11*b;
            resultado /= 100; 
        }
        else if(strcmp(tipo, "mean") == 0){
            resultado = r+b+g;
            resultado /= 3; 
        }
        else if(strcmp(tipo, "max") == 0){
            if((r > g)&&(r > b)) resultado = r;
            else if((g > r)&&(g > b)) resultado = g;
            else resultado = b; 
        }
        else if(strcmp(tipo, "min") == 0){
            if((r < g)&&(r < b)) resultado = r;
            else if((g < r)&&(g < b)) resultado = g;
            else resultado = b; 
        }
        
        printf("Caso #%d: %d\n", i, resultado); 
    }
    
    return 0;
}
