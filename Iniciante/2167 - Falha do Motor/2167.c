#include <stdio.h>

int main(){
    int i, n, num, anterior, queda;
    anterior = queda = 0; 
    
    scanf("%d", &n); 
    
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        
        if(num < anterior){
            queda = i+1;
            i++; 
            break;
        }
        
        anterior = num; 
    }
    
    while(i < n){
        scanf("%d", &num);
        i++; 
    }
    
    printf("%d\n", queda); 
    
    return 0; 
}
