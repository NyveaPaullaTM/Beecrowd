#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont;
    double soma, num;
    soma = cont = 0;
    
    do{
        scanf("%lf", &num);
        
        if(num >= 0){
            soma += num;
            cont++; 
        }
    }while(num >= 0);
    
    printf("%.2lf\n", soma/cont); 
    
    return 0; 
}
