//aproação de um aluno

#include <stdio.h>

int main(){

	float nota, media;
	float y;
	int x;
	char a;

	y = 0;
	a = ' ';

	for(x=0; x<3; x++){

		printf("Favor, prof, insira a nota %d do aluno:%c", x, a);
		scanf("%f",&nota);
		 y = nota + y;


	}

	media = (y/x);


	printf("\nMédia do aluno:%.1f\n", media);
	if(media<7)
		printf("Aluno reprovado\n");
	else
		printf("Aluno aprovado\n");



	return 0;
}
