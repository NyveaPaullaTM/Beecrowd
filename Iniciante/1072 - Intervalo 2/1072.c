#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, num, in, out;
    
    in = out = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        
        if((num >= 10)&&(num <= 20)){
            in ++;
        }
        else out++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0; 
}
