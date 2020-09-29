#include <stdio.h>

int main(){

	float ir, ij, gj;


	printf("Favor, informar o valor de insulina jejum:\t");
	scanf("%f", &ij);

	printf("Favor, informar o valor de glicose jejum:\t");
	scanf("%f", &gj);

	 ir = (ij*gj)/22.5;

	printf("\n");
	printf("Valor do índice HOMA-IR é de %.f\t\n", ir);


	return 0;
}
