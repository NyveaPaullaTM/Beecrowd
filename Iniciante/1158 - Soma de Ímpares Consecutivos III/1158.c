#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, y, soma, cont;
    
    scanf("%d", &n);
    
    while(n--){
        soma = cont = 0;
        
        scanf("%d %d", &x, &y);
        
        while(cont < y){
            if((x%2) == 0){
                x++;
            }
            
            soma += x;
            x+=2; 
            cont++; 
        }
        
        printf("%d\n", soma); 
    }
    
    
    return 0;
}
