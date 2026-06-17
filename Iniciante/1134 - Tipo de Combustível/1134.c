#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, alcool, gasolina, diesel;
    num = alcool = gasolina = diesel = 0;
    
    do{
        scanf("%d", &num);
        
        if(num == 1){
            alcool++;
        }
        else if(num == 2){
            gasolina++;
        }
        else if(num == 3){
            diesel++; 
        }
    }while(num != 4);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel); 
    
    return 0;
}
