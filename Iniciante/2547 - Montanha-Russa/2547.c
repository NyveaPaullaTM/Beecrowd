#include <stdio.h>

int main(){
    int n, min, max;
    
    while(scanf("%d %d %d", &n, &min, &max) != EOF){
        int qtd, num;
        qtd = 0;
        
        for(int i = 0; i < n; i++){
            scanf("%d", &num);
            
            if((num >= min)&&(num <= max)) qtd++;
        }
        
        printf("%d\n", qtd); 
    }
    
    return 0;
}
