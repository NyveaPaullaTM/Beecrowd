#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Decifrar(int c, char cifra1[], char cifra2[], char frase[]){
    int tam = strlen(frase); 
    
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < c; j++){
            if(toupper(frase[i]) == toupper(cifra2[j])){
                if(isupper(frase[i]) != 0){
                    frase[i] = toupper(cifra1[j]);
                }
                else{
                    frase[i] = tolower(cifra1[j]);
                }
                break; 
            }
            else if(toupper(frase[i]) == toupper(cifra1[j])){
                if(isupper(frase[i]) != 0){
                    frase[i] = toupper(cifra2[j]);
                }
                else{
                    frase[i] = tolower(cifra2[j]);
                }
                break; 
            }
        }
    }
}

int main(){
    int c, n;
    char frase[1001];
    
    while (scanf("%d %d\n", &c, &n) != EOF){        
        char cifra1[c+1], cifra2[c+1];
        
        scanf("%[^\n] %[^\n]", cifra1, cifra2);
    
        for(int i = 0; i < n; i++){
            scanf(" %[^\n]", frase);
    
            Decifrar(c, cifra1, cifra2, frase);
            printf("%s\n", frase);
        }
        printf("\n"); 
    }
    
    return 0; 
}
