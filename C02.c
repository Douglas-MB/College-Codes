#include <stdio.h>

int main(){

	unsigned char b[5];
	int i;

	for(i=0; i<=5; i++){
		b[i]=i;

		printf("%X\n", b[i]);
				//se eu especificar uma posição, ela vai ser sempre printada n vezes
				//preciso especificar algo dentro do vetor: b[algo]
	}

	return 0;
}


/*Esse código gera isso

 *** stack smashing detected ***: <unknown> terminated
Aborted (core dumped)


Apparently it happens 'cause this accesses a position beyond the array


*/

