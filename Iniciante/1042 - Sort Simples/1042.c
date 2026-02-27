#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d, e, f;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b){
        if(a > c){
            d = a;
            
            if(b > c){
                e = b;
                f = c;
            }
            else{
                e = c;
                f = b;
            }
        }
        else{
            d = c;
            e = a;
            f = b;
        }
    }
    else{
        if(b > c){
            d = b;
            
            if(a > c){
                e = a;
                f = c;
            }
            else{
                e = c;
                f = a;
            }
        }
        else{
            d = c;
            e = b;
            f = a;
        }
    }
    
    printf("%d\n", f);
    printf("%d\n", e);
    printf("%d\n\n", d);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    
    return 0;
}
