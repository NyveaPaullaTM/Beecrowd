#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    char s[30]; 
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%[^\n]s", s);
    }
    
    printf("Ciencia da Computacao\n");
    
    return 0;
}
