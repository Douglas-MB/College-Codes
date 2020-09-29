#include <stdio.h>

int main(){

	float ldl, ct, hdl0, hdl1, tg;
	char a;

	a = ' ';

	printf("Favor, informar o valor do colesterol total:%c\n",a);
	scanf("%f", &ct);
	printf("Favor, informar o valor dos triglicerídeos:%c\n",a);
	scanf("%f", &tg);
	printf("Favor, informar o valor relativo do HDL:%c\n",a);
	scanf("%f", &hdl0);
	printf("\n");

	hdl1 = hdl0 - ct;
	ldl = ct - hdl1 - (tg/5);

	printf("Valor do colesterol total:%c%.f\n",a,ct);
        printf("Valor dos triglicerídeos:%c%.f\n",a,tg);
        printf("Valor do HDL:%c%.f\n",a,hdl1);
	printf("Valor do LDL é de %.1f\n", ldl);

	return 0;
}
