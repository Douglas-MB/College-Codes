#include <stdio.h>

int main(){


	float w, h; //declarei como float porque o valor do IMC printou apenas com zeros as casas decimais
	float imc;
	char a;

	a = ' ';

	printf("Favor, informe seu peso e sua altura\n");
	scanf("%f %f", &w, &h);

	imc = w/(h*h);

	printf("Valor do seu IMC é de %c %.2f\n",a, imc);

	return 0;

}

