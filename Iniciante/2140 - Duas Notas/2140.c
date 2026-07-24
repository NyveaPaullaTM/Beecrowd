#include <stdio.h>

int main(){
    int notas[6] = {2, 5, 10, 20, 50, 100};
    int n, m, flag;
    
    scanf("%d %d", &n, &m);
    
    while((m != 0)&&(n != 0)){
        flag = 0;
        
        for(int i = 0; i < 6; i++){
            for(int j = i; j < 6; j++){
                if((notas[i]+notas[j]) == (m-n)) flag = 1; 
            }
            if(flag) break;
        }
        
        if(flag) printf("possible\n");
        else printf("impossible\n");
        
        scanf("%d %d", &n, &m);
    }
    
    return 0;
}
