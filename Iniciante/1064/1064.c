#include <stdio.h>
#include <stdlib.h>

int main(){
    double num, media;
    int i, positivos;
    
    positivos = media = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%lf", &num);
        
        if(num >= 0){
            positivos++;
            media += num;
        }
    }
    
    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media/positivos);
    
    return 0; 
}