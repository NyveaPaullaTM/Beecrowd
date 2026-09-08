#include <stdio.h>

int main(){
    int nota;
    
    scanf("%d", &nota); 
    
    if(nota == 0) printf("E\n"); 
    else if(nota < 36) printf("D\n");
    else if(nota < 61) printf("C\n");
    else if(nota < 86) printf("B\n");    
    else printf("A\n"); 
    
    return 0;
}
