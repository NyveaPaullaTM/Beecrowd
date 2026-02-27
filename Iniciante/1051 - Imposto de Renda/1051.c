#include <stdio.h>
#include <stdlib.h>

int main(){
    double sal, imposto;
    
    scanf("%lf", &sal);
    
    if(sal <= 2000){
        printf("Isento\n");
    }
    else if(sal <= 3000){
        imposto = (sal - 2000)*0.08;
        printf("R$ %.2lf\n", imposto); 
    }
    else if(sal <= 4500){
        imposto = 80 + (sal - 3000)*0.18;
        printf("R$ %.2lf\n", imposto); 
    }    
    else{
        imposto = 80 + 270 + (sal - 4500)*0.28;
        printf("R$ %.2lf\n", imposto); 
    } 
    
    return 0; 
}
