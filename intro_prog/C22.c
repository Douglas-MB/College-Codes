//par ou ímpar

#include <stdio.h>

int main(){

	int a;

	printf("Escola um número inteiro qualquer:\n");

	scanf("%d", &a);

	if(a%2==0){
		printf("O número escolhido é par\n");
	}else{
		printf("O número escolido é ímpar\n");
	}

	return 0;
}
