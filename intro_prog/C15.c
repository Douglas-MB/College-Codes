//valor da altura

//1 foot = 30,5cm       1 inch = 2,5cm

#include <stdio.h>

int main(){

	float a, b, c, d;


	printf("Digite a sua altura, por favor:\n\n");

	scanf("%f", &a);	//botar aplicações e operações que utilizam variáveis gravadas temporariamente em memória depois do scanf()

	b = (a*100);

        c = ((a*100)/30.5);

        d = ((a*100)/2.5);

	printf("Valor da altura em metros:\t%.2f\n", a);

	printf("Valor da altura em centímetros:\t%.2f\n", b);

	printf("Valor da altura em pés:\t%.2f\n", c);

	printf("Valor da altura em polegadas:\t%.2f\n", d);


	return 0;
}
