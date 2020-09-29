//par ou ímpar

#include <stdio.h>

int main(){

	int num, carac;

	printf("Insira um número de 4 digitos:\n");

	scanf("%d", &num);

	carac = (num*0.01) + (num%100);

	if(carac*carac == num){
		printf("O número possui a característica\n");

	}else{
		printf("O número não possui a característica\n");
	}


	return 0;
}
