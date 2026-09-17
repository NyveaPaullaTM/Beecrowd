#include <stdio.h>

int main(){ 
    int m;

    while(scanf("%d", &m) != EOF){
        int n, c, x, y;
        double resultado;
        n = c = 0;

        for(int i = 0; i < m; i++){
            scanf("%d %d", &x, &y);
            n += x*y;
            c += y; 
        }

        resultado = (double)n/(c*100);

        printf("%.4lf\n", resultado);
    }

    return 0;
}
