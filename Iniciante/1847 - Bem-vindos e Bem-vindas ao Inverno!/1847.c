#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, var1, var2;
    
    scanf("%d %d %d", &a, &b, &c);
    
    var1 = b-a;
    var2 = c-b;
    
    if(var1 > 0){
        if(var2 <= 0) printf(":(\n");
        else if(abs(var2) < abs(var1)) printf(":(\n");
        else printf(":)\n"); 
    }
    else if(var1 < 0){
        if(var2 >= 0) printf(":)\n"); 
        else if(abs(var2) < abs(var1)) printf(":)\n"); 
        else printf(":(\n");
    }
    else{
        if(var2 > 0) printf(":)\n");
        else printf(":(\n");
    }
    
    return 0;
}
