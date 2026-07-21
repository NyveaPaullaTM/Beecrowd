#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int h, m, atraso;
    
    while(scanf("%d:%d", &h, &m) != EOF){
        atraso = 0;
        
        h+=1;
        
        if(h >= 8){
            atraso += (h-8)*60;
            atraso += m;
        }
        
        printf("Atraso maximo: %d\n", atraso);
    }
    
    return 0;
}
