#include <stdio.h>
#include <stdlib.h>

int main(){
	int cem, cinquenta, vinte, dez, cinco, dois, um, valor, aux;
	cem = cinquenta = vinte = dez = cinco = dois = um = 0;

	scanf("%d", &valor);
	aux = valor; 

	while((valor/100) > 0) {
		valor -= 100;
		cem++;
	}

	while((valor/50) > 0) {
		valor -= 50;
		cinquenta++;
	}

    while((valor/20) > 0){
        valor -= 20;
        vinte++;
    } 

	while((valor/10) > 0) {
		valor -= 10;
		dez++;
	}

	while((valor/5) > 0) {
		valor -= 5;
		cinco++;
	}

	while((valor/2) > 0) {
		valor -= 2;
		dois++;
	}

	while((valor/1) > 0) {
		valor -= 1;
		um++;
	}

	printf("%d\n", aux);
	printf("%d nota(s) de R$ 100,00\n", cem);
	printf("%d nota(s) de R$ 50,00\n", cinquenta);
	printf("%d nota(s) de R$ 20,00\n", vinte);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinco);
	printf("%d nota(s) de R$ 2,00\n", dois);
	printf("%d nota(s) de R$ 1,00\n", um);

	return 0;
}
