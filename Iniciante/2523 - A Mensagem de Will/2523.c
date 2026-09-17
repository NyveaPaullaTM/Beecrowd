#include <stdio.h>

int main(){ 
    int n, l;
    char str[27];

    while(scanf("%s", str) != EOF){
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &l);

            printf("%c", str[l-1]);
        }
        printf("\n"); 
    }

    return 0;
}
