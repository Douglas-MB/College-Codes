#include <stdio.h>

int main(){

	float x, y;
	char a;

	printf("Escolha um valor real aleatório para x:\n");

	scanf("%f", &x);

	a = ' ';

	printf("Valor escolhido a x:%c%f", a, x);

	if(x<1){
		printf("\ny = %f\n", x);
	}

	else if(x==1){
		printf("\ny = 0\n");
	}
	else{

		y = (x*x);

		printf("\ny = %f\n", y);
	}

	return 0;
}
