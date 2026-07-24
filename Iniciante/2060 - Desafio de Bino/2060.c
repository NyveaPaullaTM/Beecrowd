#include <stdio.h>

int main(){
    int n, l;
    int dois, tres, quatro, cinco;
    dois = tres = quatro = cinco = 0;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &l);
        
        if(l%2 == 0) dois++;
        if(l%3 == 0) tres++;
        if(l%4 == 0) quatro++;
        if(l%5 == 0) cinco++;
    }
    
    printf("%d Multiplo(s) de 2\n", dois); 
    printf("%d Multiplo(s) de 3\n", tres);
    printf("%d Multiplo(s) de 4\n", quatro);
    printf("%d Multiplo(s) de 5\n", cinco);
    
    return 0;
}
