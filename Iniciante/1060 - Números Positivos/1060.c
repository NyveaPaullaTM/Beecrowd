#include <stdio.h>
#include <stdlib.h>

int main(){
    double num;
    int i, positivos;
    
    positivos = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%lf", &num);
        
        if(num >= 0) positivos++;
    }
    
    printf("%d valores positivos\n", positivos);
    
    return 0; 
}
