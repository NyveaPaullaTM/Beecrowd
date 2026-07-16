#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, forca;
    char nome[20];
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%s %d", nome, &forca);
        
        if(!strcmp(nome, "Thor")) printf("Y\n");
        else printf("N\n"); 
    }
    
    return 0;
}
