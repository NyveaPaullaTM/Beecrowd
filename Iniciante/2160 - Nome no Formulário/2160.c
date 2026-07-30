#include <stdio.h>
#include <string.h>

int main(){
    char string[501];
    
    scanf("%[^\n]s", string);
    
    if(strlen(string) > 80) printf("NO\n");
    else printf("YES\n"); 
    
    return 0; 
}
