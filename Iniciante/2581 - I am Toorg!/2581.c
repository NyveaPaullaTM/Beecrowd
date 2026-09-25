#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    char string[500];
    
    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", string);
        printf("I am Toorg!\n");
    }
    
    return 0;
}
