#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, qtd, coelho, rato, sapo, total;
    double p_coelho, p_rato, p_sapo;
    char letra;
    
    coelho = rato = sapo = total = 0;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d %c", &qtd, &letra);
        
        if(letra == 'C'){
            coelho += qtd;
        }
        else if(letra == 'R'){
            rato += qtd;
        }
        else if(letra == 'S'){
            sapo += qtd;
        }
        
        total += qtd;
    }
    
    p_coelho = ((double)coelho/total)*100;
    p_rato = ((double)rato/total)*100;
    p_sapo = ((double)sapo/total)*100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf %\n", p_coelho);
    printf("Percentual de ratos: %.2lf %\n", p_rato);
    printf("Percentual de sapos: %.2lf %\n", p_sapo);
 
    return 0;  
}
