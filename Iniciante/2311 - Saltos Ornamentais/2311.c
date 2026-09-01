#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n); 
    
    while(n--){
        char nome[30]; 
        double gd, maior, menor, soma; 
        double notas[7]; 
        maior = soma = 0;
        menor = 11;
        
        scanf("%s", nome);
        scanf("%lf", &gd);
        
        for(int i = 0; i < 7; i++){
            scanf("%lf", &notas[i]);
            
            if(notas[i] > maior) maior = notas[i];
            if(notas[i] < menor) menor = notas[i];
            
            soma += notas[i];
        }

        soma -= maior;
        soma -= menor;
        soma *= gd; 
        
        printf("%s %.2lf\n", nome, soma); 
    }
    
    return 0;
}
