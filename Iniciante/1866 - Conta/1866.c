#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, num;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &num);
        
        if(num%2 == 0) printf("0\n");
        else printf("1\n");
    }
    
    return 0;
}
