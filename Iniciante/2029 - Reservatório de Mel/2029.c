#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.14;

int main(){
    double v, d, area, altura;
    
    while(scanf("%lf %lf", &v, &d) != EOF){
        area = PI*pow(d/2, 2);
        altura = v/area;
        
        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }
    
    return 0;
}
