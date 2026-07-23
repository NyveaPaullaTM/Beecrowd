#include <stdio.h>

int main(){
    int s, t, f;
    
    scanf("%d %d %d", &s, &t, &f);
    
    printf("%d\n", (s+t+f+24)%24); 
    
    return 0;
}
