#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int carneiros[n];
    int passou[n];
    int t, pos, atacou; 
    unsigned long long total, roubou; 
    pos = atacou = roubou = total = 0; 
    
    for(int i = 0; i < n; i++){
        scanf("%d", &carneiros[i]);
        total += carneiros[i]; 
        passou[i] = 1; 
    }
    
    while(1){
        if(passou[pos]){
            atacou++;
            passou[pos] = 0;
        }
        
        if(carneiros[pos] > 0){
            carneiros[pos]--; 
            roubou++;
            
            if((carneiros[pos]+1)%2 == 0) pos--;
            else pos++;
        }
        else{
            if((carneiros[pos])%2 == 0) pos--;
            else pos++;
        }
        
        if((pos < 0)||(pos >= n)) break; 
    }

    printf("%d %llu\n", atacou, total-roubou); 
    
    return 0;
}
