//Média ponderada

#include <stdio.h>

int main(){

	float a, b, c, med;

	printf("Insira as notas do aluno\n");

	scanf("%f %f %f", &a, &b, &c);

	if(a>b && a>c){
		med = (a*4 + b*3 +c*3)/10;

		printf("Valor da média é %f\n", med);

		if(med<7){
			printf("Aluno reprovado\n");

		} else{
			printf("Aluno aprovado\n");
		}

	}else if(a==b && a>c && b>c){
		med = (a*4 + b*4 + c*3)/11;

		printf("Valor da média é %f\n", med);

                if(med<7){ 
                        printf("Aluno reprovado\n");

                } else{ 
                        printf("Aluno aprovado\n");
                }

	}if(b>a && b>c){
                med = (a*b + b*4 +c*3)/10;

                printf("Valor da média é %f\n", med);

                if(med<7){
                        printf("Aluno reprovado\n");

                } else{
                        printf("Aluno aprovado\n");
                }

        }else if(a==b && b>c && a>c){
                med = (a*4 + b*4 + c*3)/11;

                printf("Valor da média é %f\n", med);

                if(med<7){ 
                        printf("Aluno reprovado\n");

                } else{ 
                        printf("Aluno aprovado\n");
                }
	}if(c>b && c>a){
                med = (a*4 + b*3 +c*3)/10;

                printf("Valor da média é %f\n", med);

                if(med<7){
                        printf("Aluno reprovado\n");

                } else{
                        printf("Aluno aprovado\n");
                }

        }else if(c==b && a>c && b>c){
                med = (a*3 + b*4 + c*4)/11;

                printf("Valor da média é %f\n", med);

                if(med<7){ 
                        printf("Aluno reprovado\n");

                } else{ 
                        printf("Aluno aprovado\n");
                }


	}
	return 0;
}
