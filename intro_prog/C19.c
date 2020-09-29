#include <stdio.h>

int main(){

	float sal, Sal;

	printf("Insira o valor do salário do funcionário:\n");

	scanf("%f", &sal);

	if(sal<=300){

		Sal = (sal + (sal*0.5));

		printf("Valor com reajuste:%f\n", Sal);

	}

	else{
		Sal = (sal + (sal*0.3));

		printf("Valor com reajuste:%f\n", Sal);

	}


	return 0;
}
