#include <stdio.h>

int main(){
    double num;
    int n;
    num = 0;
    
    scanf("%d", &n);
    
    while(n--){
        num = 1/(2+num); 
    }
    
    num += 1; 
    
    printf("%.10lf\n", num); 

    
    return 0; 
}
