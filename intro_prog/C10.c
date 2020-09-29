//média de 10 alunos

#include <stdio.h>

int main(){

	int x;
	float nota, y, media, nt, med;


	nt =0;
	med = 0;

	printf("Favor, insira a nota dos alunos\n");

	for(x=1;x<11;x++){


	printf("\nMédia do aluno %d\n", x);

		for(y=0;y<3;y++){

			scanf("%f", &nota);

			nt = (nota + nt);
		}
        media = nt/y;

	printf("Valor da média:%.2f\n\n", media);

	nt = 0.0;
	}

//	med = media + med;

//	printf("Med:\t%.2f\n", med);

	return 0;
}
