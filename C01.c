#include <stdio.h>

int main(){

	unsigned char a[]={} ; //deixar o vetor vazio ou espaços vazios printa o end. de memória

	int i;

	for(i=0; i<=10; i++){	//há dif.: i<5|i<=5; o primeiro printa até a posição 5 do array, já o segundo, até a posição 6
		printf("%d\n", a[i]);
	}



	return 0;
}

//Valores de end. mem. ficam mudando, mas alguns se repetem; isso mais pro zero que fica mais nítido
