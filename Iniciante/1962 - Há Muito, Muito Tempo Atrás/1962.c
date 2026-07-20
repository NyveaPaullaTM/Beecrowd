#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, t;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &t);
        
        if(t < 2015){
            printf("%d D.C.\n", 2015-t);
        }
        else{
            printf("%d A.C.\n", t-2014);
        }
    }
    
    return 0;
}
