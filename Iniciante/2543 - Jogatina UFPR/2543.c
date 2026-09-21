#include <stdio.h>

int main(){
    int n, l;
    
    while(scanf("%d %d", &n, &l) != EOF){
        int i, j, qtd;
        qtd = 0;
    
        for(int k = 0; k < n; k++){
            scanf("%d %d", &i, &j);
            
            if(i == l){
                if(!j) qtd++; 
            }
        }
        
        printf("%d\n", qtd); 
    }
    
    return 0;
}
