#include <stdio.h>

int main(){
    int t;
    
    scanf("%d", &t);
    
    while(t--){
        int ad, dd, ld, ag, dg, lg, bonus;
        int dabriel, guarte;
        
        scanf("%d", &bonus);
        scanf("%d %d %d", &ad, &dd, &ld);
        scanf("%d %d %d", &ag, &dg, &lg); 
        
        dabriel = (ad+dd)/2;
        guarte = (ag+dg)/2;

        if(ld%2 == 0) dabriel += bonus;
        if(lg%2 == 0) guarte += bonus;
        
        if(dabriel == guarte) printf("Empate\n");
        else if(dabriel > guarte) printf("Dabriel\n");
        else printf("Guarte\n"); 
    }
    
    return 0;
}
