#include <stdio.h>

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        int t, d;
        double media, record;
        record = 35564546; 

        for(int i = 0; i < n; i++){
            scanf("%d %d", &t, &d); 
            
            media = (double)t/d;
            
            if(media < record){
                printf("%d\n", i+1);
                record = media; 
            }
        }
    }
    
    return 0;
}
