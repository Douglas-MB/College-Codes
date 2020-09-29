//Fibonacci

#include <stdio.h>
#include <unistd.h>

int main(){

	int a, nterm, t1, t2, tx;
	char b;

	b = ' ';

	t1 = 0;

	t2 = 1;

	printf("Selecione o número de termos:\t");

	scanf("%d", &nterm);

	printf("Número de termos selecionado:\t%d\n", nterm);

	printf("Números em Fibonacchi:\n");

	for(a = 1; a <= nterm; a++){

		sleep(2);

		printf("%d%c\n", t1, b);

		tx = t1 + t2;

		t1 = t2;

		t2 = tx;
	}

	return 0;
}
