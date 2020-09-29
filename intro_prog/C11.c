//média de 10 alunos

#include <stdio.h>

int main(){

	int cont;
	float n1, n2, n3, media, medM, medm;
	char a;


	a = ' ';
	cont = 0;
	medM = 0;
	medm = 0;

	while(cont <= 9){
		printf("\nNota 1:%c", a);
		scanf("%f", &n1);

		printf("Nota 2:%c", a);
		scanf("%f", &n2);

		printf("Nota 3:%c", a);
		scanf("%f", &n3);

		media = (n1 + n2 + n3)/3;

		printf("\nMedia:%c%.2f", a, media);
		printf("\n");

		if(cont == 0){
			medm = media;
			medM = media;
		} else if(media > medM) {
			medM = media;
		} else if(media < medm ){
			medm =  media;
		}

		cont++;
	}
	printf("\nMaior média:%c%.2f\n", a, medM);
	printf("\nMenor média:%c%.2f\n", a, medm);

	return 0;
}

