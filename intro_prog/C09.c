//preço do combustível

#include <stdio.h>

int main(){

	char x, a, d, g;
	char b;
	float y;

	b = ' ';

	printf("Esses são os combustíveis que temos:\nÁlcool(A)\nDiesel(D)\nGasolina(G)\n");
	printf("Escolha um a partir de suas iniciais, por favor\n");


	scanf("%c", &x);

	printf("Insira a quantidade de litros, por favor:\t\n");

	switch(x){
	case 'a':
		printf("Álcool\tPreço por litro:%c2,489\n",b);
		break;
	case 'd':
		printf("Diesel\tPreço por litro:%c1,589\n",b);
		break;
	case 'g':
		printf("Gasolina\tPreço por litro:%c3,299\n",b);
		break;
	default :
		printf("Não temos esse combustível, caro cliente\n");

	}


	printf("\nInsira a quantidade de litros, por favor:\t\n");
	scanf("%f", &y);



	return 0;


}
