#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, q, r;
    
    scanf("%d %d", &a, &b);
    q = 0;
    r = a; 
    
    if(a > 0){
        printf("%d %d\n", a/b, a%b); 
    }
    else{
        if(b < 0){
            while(b*q > a){
                q++;
            }
            r = a-(q*b);
            
            printf("%d %d\n", q, r); 
        }
        else{
            while(b*q > a){
                q--;
            }
            r = a-(q*b);
            
            printf("%d %d\n", q, r);             
        }
    }
    
    return 0;
}
