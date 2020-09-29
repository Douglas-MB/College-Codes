//verificação do número

#include <stdio.h>

int main(){

	float num;
	int x;

	x = 1;

	while(x>0){

	printf("\nInsira um número por favor:\n");
	scanf("%f", &num);

	if(num == 0)
		printf("Número nulo\n");
	else if (num > 0)
		printf("Número positivo\n");
	else
		printf("Número negativo\n");
	}


	return 0;
}
