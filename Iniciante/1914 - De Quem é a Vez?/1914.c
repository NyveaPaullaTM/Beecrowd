#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, num1, num2;
    char nome1[20], nome2[20], escolha1[6], escolha2[6];
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%s %s %s %s", nome1, escolha1, nome2, escolha2);
        scanf("%d %d", &num1, &num2);
        
        if((num1+num2)%2 == 0){
            if(escolha1[0] == 'P') printf("%s\n", nome1);
            else printf("%s\n", nome2); 
        }
        else{
            if(escolha1[0] == 'I') printf("%s\n", nome1);
            else printf("%s\n", nome2);             
        }
    }
    
    return 0;
}
