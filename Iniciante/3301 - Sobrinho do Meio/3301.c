#include <stdio.h>

int main(){
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if((a > b)&&(a > c)){
            if(b > c) printf("zezinho\n");
            else printf("luisinho\n");
        }
        else if((b > a)&&(b > c)){
            if(a > c) printf("huguinho\n");
            else printf("luisinho\n");        
        }
        else{
            if(b > a) printf("zezinho\n");
            else printf("huguinho\n");   
        }
    }

    return 0;
}
