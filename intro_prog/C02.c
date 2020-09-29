#include <stdio.h>
#include <math.h>

int main(){

	double r, A;

	printf("Informe o valor do raio desejado:\n");
	scanf("%lf", &r);

	A = (3.1415*pow(r,2));

	printf("Valor do raio escolhido foi de %.lf\n", r);
	printf("Valor da área do círculo é de %.3lf\n", A);

	return 0;
}

//usar -lm para math.h
