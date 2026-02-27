#include <stdio.h>
#include <stdlib.h>

int main(){
    int hinicio, minicio, hfim, mfim, htotal, mtotal;
    
    scanf("%d %d %d %d", &hinicio, &minicio, &hfim, &mfim);
    
    if(hinicio == hfim){
        htotal = 24;
    }
    else if(hinicio > hfim){
        htotal = 24 - hinicio + hfim;
    }
    else{
        htotal = hfim - hinicio;
    }
    
    if(minicio > mfim){
        mtotal = 60 - minicio + mfim;
        htotal -= 1;
    }
    else{
        mtotal = mfim - minicio;
        
        if((hinicio == hfim)&&(mtotal > 0)){
            htotal = 0;
        }
    }
    
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", htotal, mtotal); 
    
    return 0; 
}
