//soma dos menores números

#include <stdio.h>

int main(){

	float a, b, c, d, sum;

	printf("Escolha quatro números:\n");

	scanf("%f %f %f %f", &a, &b, &c, &d);

	printf("Números escolhidos:\n%.2f\t%.2f\t%.2f\t%.2f\n", a, b, c, d);

	if(a>b && a>c && a>d && a==a){
		sum = (b + c + d);

		printf("Soma dos menores números:\t%.2f\n", sum);

	}
	else if(b>a && b>c && b>d && b==b){

		sum = (a + c + d);

		printf("Soma dos menores números:\t%.2f\n", sum);

	}
	else if(c>a && c>b && c>d && c==c){

		sum = (a + b + d);

		printf("Soma dos menores números:\t%.2f\n", sum);
	}
	else if(d>a && d>b && d>c && d==d){

		sum = (a + b + c);

		printf("Soma dos menores números:\t%.2f\n", sum);

	}
	else{

		printf("Não há três números compatíveis à operação\n");

	}



	return 0;
}
