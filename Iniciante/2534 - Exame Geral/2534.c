#include <stdio.h>
#include <stdlib.h>

int Comparar(const void* a, const void* b){
    int aux1 = *(const int*)a;
    int aux2 = *(const int*)b;
    
    if(aux1 > aux2) return -1;
    else if(aux2 > aux1) return 1;
    
    return 0; 
}

int main(){
    int n, q;
    
    while(scanf("%d %d", &n, &q) != EOF){
        
        int notas[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &notas[i]); 
        }
        
        qsort(notas, n, sizeof(int), Comparar);
        
        int pos; 
        for(int i = 0; i < q; i++){
            scanf("%d", &pos);
            printf("%d\n", notas[pos-1]); 
        }
    }
    
    return 0;
}
