/*3 - Utilizando apenas um vetor de tamanho 6, 
troque os valores de maneira inversa;*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL,"");
	
	int a1[6], a2[6], a3[6], i, a2v[6], h=6;
	
	printf ("\n Valor do primeiro vetor: \n");
		for (i = 1; i < 6; i++) { 
		printf ("Digite o valor da posição %d ", i);
		scanf ("%d", &a2 [i]); 
	}

	
	for (i = 1; i < 6; i++ ) {
		a2v[i]=a2 [h-1];
		h--;
	}
	
	for (i = 1; i < 6; i++ ){
		a3 [i]=a2v[i];
	}
	
	printf ("\n fafas: \n");
	for (i = 1; i < 6; i++) { 
		printf ("\n lalau %d: %d ", i, a3 [i]);	
	}		
		
}

