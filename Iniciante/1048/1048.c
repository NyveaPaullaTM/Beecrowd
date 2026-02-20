#include <stdio.h>
#include <stdlib.h>

int main(){
    double sal, nsal, reajuste;
    int percentual;
    
    scanf("%lf", &sal);
    
    if(sal <= 400){
        percentual = 15;
        reajuste = sal*15/100;
        nsal = sal+reajuste;
    }
    else if((sal > 400)&&(sal <= 800)){
        percentual = 12;
        reajuste = sal*12/100;
        nsal = sal+reajuste;        
    }
    else if((sal > 800)&&(sal <= 1200)){
        percentual = 10;
        reajuste = sal*10/100;
        nsal = sal+reajuste;        
    }
    else if((sal > 1200)&&(sal <= 2000)){
        percentual = 7;
        reajuste = sal*7/100;
        nsal = sal+reajuste;        
    }
    else if(sal > 2000){
        percentual = 4;
        reajuste = sal*4/100;
        nsal = sal+reajuste;        
    }
    
    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %\n", percentual);
    
    return 0; 
}