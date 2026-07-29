#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char palavra[10001];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        
        scanf("%s", palavra); 
        
        double valor;
        int tam; 
        
        tam = strlen(palavra);
        valor = (double)tam/100; 
        
        printf("%.2lf\n", valor);
    }
    
    return 0; 
}
