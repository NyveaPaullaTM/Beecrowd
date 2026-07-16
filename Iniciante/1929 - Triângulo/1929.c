#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d, maior;
    maior = 0; 
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // 1: a, b, c
    if((a+b > c)&&(a+c > b)&&(b+c > a)){
        printf("S\n");
        return 0; 
    }
    
    // 2: b, c, d
    if((b+c > d)&&(b+d > c)&&(c+d > b)){
        printf("S\n");
        return 0; 
    }

    // 3: a, b, d
    if((a+b > d)&&(a+d > b)&&(b+d > a)){
        printf("S\n");
        return 0; 
    }
    
    // 4: a, c, d
    if((a+c > d)&&(a+d > c)&&(c+d > a)){
        printf("S\n");
        return 0; 
    }
    
    printf("N\n");
    
    return 0;
}
