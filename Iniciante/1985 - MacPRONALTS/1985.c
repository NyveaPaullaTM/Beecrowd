#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, codigo, qtd;
    double total;
    total = 0; 
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d %d", &codigo, &qtd);
        
        if(codigo == 1001) total += qtd*1.5; 
        else if(codigo == 1002) total += qtd*2.5;
        else if(codigo == 1003) total += qtd*3.5; 
        else if(codigo == 1004) total += qtd*4.5; 
        else if(codigo == 1005) total += qtd*5.5; 
    }
    
    printf("%.2lf\n", total); 
    
    return 0;
}
