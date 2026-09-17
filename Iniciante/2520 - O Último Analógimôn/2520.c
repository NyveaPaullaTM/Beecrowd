#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;

    while(scanf("%d %d", &n, &m) != EOF){
        int pos1, pos2, x1, x2, y1, y2, x;
        pos1 = pos2 = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &x); 
                
                if(x == 1){
                        pos1 = x;
                        x1 = i;
                        y1 = j; 
                    }
                if(x == 2){
                        pos2 = x; 
                        x2 = i;
                        y2 = j; 
                } 
            }
        }

        printf("%d\n", (abs(x2-x1) + abs(y2-y1)));
    }

    return 0;
}
