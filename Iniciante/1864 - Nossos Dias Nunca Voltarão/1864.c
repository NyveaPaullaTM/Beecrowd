#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[] = "LIFE IS NOT A PROBLEM TO BE SOLVED BUT A REALITY TO BE EXPERIENCED";
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("%c", string[i]);
    }
    printf("\n"); 
    
    return 0;
}
