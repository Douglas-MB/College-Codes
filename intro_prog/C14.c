//divisão entre números

#include <stdio.h>

int main(){

	float a, b, c;
	char d;

	d = ' ';


	printf("Escolha dois números reais quaisquer:\n");

	scanf("%f%f", &a, &b);

	printf("Números escolhidos:%c%f\t%f\n", d, a, b);

	if(b != 0){
		c = (a/b);

		printf("Resultado da divisão:%c%f\n", d, c);
	}
	else{
		printf("Segundo número é zero!\n");
	}

	return 0;
}
