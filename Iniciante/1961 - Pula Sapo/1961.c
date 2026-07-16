#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int p, n, anterior, num;
    
    scanf("%d %d", &p, &n);
    
    scanf("%d", &num);
    n--; 
    anterior = num; 
    
    while(n--){
        scanf("%d", &num); 
        
        if(abs(num-anterior) > p){
            printf("GAME OVER\n");
            return 0; 
        }
        anterior = num; 
    }
    
    printf("YOU WIN\n"); 
    
    return 0;
}
