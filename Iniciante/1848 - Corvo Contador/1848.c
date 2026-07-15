#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[10];
    int soma, vezes;
    soma = 0; 
    vezes = 3;
    
    while(vezes){
        scanf("%[^\n]s", string);
        getchar(); 
        
        if(string[0] == 'c'){
            printf("%d\n", soma); 
            soma = 0; 
            vezes--; 
        }
        else{
            if(string[0] == '*') soma += 4;
            if(string[1] == '*') soma += 2;
            if(string[2] == '*') soma += 1; 
        }
    }
    
    return 0;
}
