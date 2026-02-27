#include <stdio.h>
#include <stdlib.h>

int main(){
	int entrada, horas, minutos;
	horas = minutos  = 0;
	
	scanf("%d", &entrada);
	
	while((entrada/3600) > 0){
	    entrada -= 3600;
	    horas++;
	}
	
	while((entrada/60) > 0){
	    entrada -= 60;
	    minutos++;
	}
	
	printf("%d:%d:%d\n", horas, minutos, entrada);
	
	return 0;
}
