#include <stdio.h>

int main(){
    int total, mes, dia;
    
    while(scanf("%d %d", &mes, &dia) != EOF){
        total = 0;
            
        for(int i = 1; i < mes; i++){
            if(i == 2) total += 29;
            else if((i == 1)||(i == 3)||(i == 5)||(i == 7)||(i == 8)||(i == 10)||(i == 12)) total += 31;
            else total += 30;
        }
        total += dia;
        
        if(total > 360) printf("Ja passou!\n");
        else if(total == 360) printf("E natal!\n");
        else if(total == 359) printf("E vespera de natal!\n");
        else printf("Faltam %d dias para o natal!\n", 360-total); 
    }
    
    return 0;
}
