#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    
    scanf("%d", &t);
    
    while(t--){
        int pa, pb, anos;
        double g1, g2;
        anos = 0;
        
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        
        while(pa <= pb){
            pa += pa*g1/100;
            pb += pb*g2/100;
            anos++;
            
            if(anos > 100){
                printf("Mais de 1 seculo.\n"); 
                break; 
            }
        }
        
        if(anos <= 100){
            printf("%d anos.\n", anos); 
        }
    }
    
    return 0;
}
