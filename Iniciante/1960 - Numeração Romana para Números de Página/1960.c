#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char num[4];
    char *unidade[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char *dezena[] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *centena[] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; 
    int u, d, c;
    
    scanf("%s", &num);
    
    if(strlen(num) == 3){
        u = num[2] - 48;
        d = num[1] - 48;
        c = num[0] - 48;
    }
    else if(strlen(num) == 2){
        u = num[1] - 48;
        d = num[0] - 48;
        c = 0;       
    } 
    else{
        u = num[0] - 48;
        d = 0;
        c = 0;       
    }
    
    if(c) printf("%s", centena[c-1]);
    if(d) printf("%s", dezena[d-1]);
    if(u) printf("%s", unidade[u-1]);    
    printf("\n"); 
    
    return 0;
}
