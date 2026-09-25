#include <stdio.h>

int main(){
    int n, d;
    
    while(scanf("%d %d", &n, &d) != EOF){
        int dia[d], mes[d], ano[d];
        int pode[d][n];
        
        for(int i = 0; i < d; i++){
            scanf("%d/%d/%d", &dia[i], &mes[i], &ano[i]);
            
            for(int j = 0; j < n; j++){
                scanf("%d", &pode[i][j]); 
            }
        }
        
        int i, j; 
        int flag; 
        
        for(i = 0; i < d; i++){
            flag = 1; 
            for(j = 0; j < n; j++){
                if(pode[i][j] == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) break;
        }
        
        if(flag) printf("%d/%d/%d\n", dia[i], mes[i], ano[i]);
        else printf("Pizza antes de FdI\n"); 
    }
    
    return 0;
}
