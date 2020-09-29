//verificar divisores

#include <stdio.h>

int main(){

	int a;

	printf("Escolha um número inteiro:\t");

	scanf("%d", &a);

	printf("Número escolhido:\t%d\n", a);

	if(a%3 == 0 && a%5 == 0){

		printf("\nNúmero é divisível por 3 e 5 simultaneamente\n");

	}else{
		printf("\nNúmero não é divisível por 3 e 5 simultaneamente\n");
	}

	return 0;
}
