#include <stdio.h>

int main(){
    int n;
    
    while(scanf("%d", &n)){
        if(n == 0) break; 
        
        for(int i = 0; i < n; i++){
            int num;
            
            scanf("%d", &num);
            
            if(num%2 == 0) printf("%d\n", (num-1)*2); 
            else printf("%d\n", num*2-1); 
        }
    }
    
    return 0; 
}
