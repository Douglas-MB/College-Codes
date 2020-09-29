#include <stdio.h>

int main(){

	float pam, pad, pas;
	char a;

	a = ' ';

	printf("Informe o valor do pad:%c",a);
	scanf("%f", &pad);
	printf("Informe o valor do pas:%c",a);
	scanf("%f", &pas);
	printf("\n");

	pam = ((2*pad) + pas)/3;

	printf("Valor da pressão arterial:%c%.1f\n",a, pam);

	return 0;

}
