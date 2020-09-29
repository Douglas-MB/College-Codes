//verificação do voto

#include <stdio.h>

int main(){

	int id;
	char a;

	a = ' ';

	printf("Por favor, eleitor(a), informe a sua idade para a verificação:%c", a);
	scanf("%d", &id);
	if (id<18 || id>120)
		printf("Idadade inválida\n");
	else
		printf("Idade válida\n");


	return 0;
}
