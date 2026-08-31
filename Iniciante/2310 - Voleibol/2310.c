#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n); 
    
    int ts, tb, ta, ss, sb, sa; 
    ts = tb = ta = ss = sb = sa = 0; 
    
    while(n--){
        char nome[30];
        int s, b, a, s1, b1, a1;
        
        scanf("%s", nome);
        
        scanf("%d %d %d", &s, &b, &a);
        ts += s;
        tb += b;
        ta += a;
        
        scanf("%d %d %d", &s1, &b1, &a1);
        ss += s1;
        sb += b1; 
        sa += a1; 
    }
    
    double ps, pb, pa;
    ps = (double)100*ss/(double)ts;
    pb = (double)100*sb/(double)tb;
    pa = (double)100*sa/(double)ta;
    
    printf("Pontos de Saque: %.2lf %%.\n", ps); 
    printf("Pontos de Bloqueio: %.2lf %%.\n", pb); 
    printf("Pontos de Ataque: %.2lf %%.\n", pa);
    
    return 0;
}
