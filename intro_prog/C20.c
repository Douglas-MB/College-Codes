#include <stdio.h>

int main(){

	float a, b, c;
	char d;

	printf("Escolha três valores diferentes aleatórios:\n");

	scanf("%f %f %f", &a, &b, &c);

	d = ' ';

	printf("Números escolhidos:%c%f\t%f\t%f\n", d,  a, b, c);

	if(a>b && a>c){

		printf("Maior número é o %f", a);

	} else if(b>a && b>c){

		printf("Maior número é o %f\n", b);

	} else{
		printf("Um ou mais números são iguais\n");

	}

	return 0;
}
