#include <stdio.h>
#include <string.h>

int main(){
    char dodo[10], leo[10], pepper[10]; 
    int vencedor; 
    
    while(scanf(" %s %s %s", dodo, leo, pepper) != EOF){
        vencedor = 4;
        
        if(strcmp(dodo, "pedra") == 0){
            if(strcmp(leo, "pedra") == 0){
                if(strcmp(pepper, "papel") == 0) vencedor = 3; 
                else vencedor = 4; 
            }
            else if(strcmp(leo, "papel") == 0){
                if(strcmp(pepper, "pedra") == 0) vencedor = 2; 
                else vencedor = 4; 
            }
            else if(strcmp(leo, "tesoura") == 0){
                if(strcmp(pepper, "tesoura") == 0) vencedor = 1; 
                else vencedor = 4; 
            }
        }
        else if(strcmp(dodo, "papel") == 0){
            if(strcmp(leo, "pedra") == 0){
                if(strcmp(pepper, "pedra") == 0) vencedor = 1;  
                else vencedor = 4;  
            }
            else if(strcmp(leo, "papel") == 0){
                if(strcmp(pepper, "tesoura") == 0) vencedor = 3; 
                else vencedor = 4; 
            }
            else if(strcmp(leo, "tesoura") == 0){
                if(strcmp(pepper, "papel") == 0) vencedor = 2; 
                else vencedor = 4; 
            }
        }
        else if(strcmp(dodo, "tesoura") == 0){
            if(strcmp(leo, "pedra") == 0){
                if(strcmp(pepper, "tesoura") == 0) vencedor = 2; 
                else vencedor = 4; 
            }
            else if(strcmp(leo, "papel") == 0){
                if(strcmp(pepper, "papel") == 0) vencedor = 1; 
                else vencedor = 4; 
            }
            else if(strcmp(leo, "tesoura") == 0){
                if(strcmp(pepper, "pedra") == 0) vencedor = 3; 
                else vencedor = 4; 
            }
        }
        
        switch(vencedor){
            case 1:
                printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n"); 
                break; 
            case 2:
                printf("Iron Maiden's gonna get you, no matter how far!\n"); 
                break;
            case 3:
                printf("Urano perdeu algo muito precioso...\n"); 
                break;
            case 4:
                printf("Putz vei, o Leo ta demorando muito pra jogar...\n"); 
                break;
        }
    }
    
    return 0;
}
