#include <stdio.h>
#include <string.h>

int main(){
    char string[101];
    int paridade = 0; 
    
    scanf("%s", string);
    
    int tam = strlen(string); 
    
    for(int i = 0; i < tam; i++){
        if(string[i] == '1') paridade++; 
    }
    
    if((paridade%2) == 0) printf("%s0\n", string);
    else printf("%s1\n", string);
    
    return 0;
}
