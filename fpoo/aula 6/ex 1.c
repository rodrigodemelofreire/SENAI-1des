/*1 - Crie dois vetores numéricos de dimensão 5 com valores 
informados pelo usuário. Apresente a soma do primeiro vetor 
com o inverso do segundo.*/


#include <stdio.h>
#include <locale.h>
int main () {
setlocale (LC_ALL,"");
	int a1[5], a2[5], a3[5], i, a2v[5], h=5; //vetores
	
	printf ("Valor do primeiro vetor: \n");
	for (i = 0; i < 5; i++) { 
		printf ("Digite o valor da posição %d ", i);
		scanf ("%d", &a1 [i]);	
	}

	printf ("Valor do segundo vetor: \n");
	for (i = 0; i < 5; i++) { 
		printf ("Digite o valor da posição %d ", i);
		scanf ("%d", &a2 [i]); 
	}
		
	for (i = 0; i < 5; i++ ) {
		a2v[i]=a2 [h-1];
		h--;
	}
	
	for (i = 0; i < 5; i++ ){
		a3 [i]=a1[i]+a2v[i];
	}
	
	printf ("\n Valor do primeiro vetor: \n");
	for (i = 0; i < 5; i++) { 
		printf ("\n Digite o valor da posição %d: %d ", i, a2v [i]);	
	}	
		
		//soma dos vetores
	printf ("\n soma do vetor 1 com o inverso do vetor 2: \n");
	for (i = 0; i < 5; i++) { 
		printf ("\n valor da soma dos vetores %d: %d ", i, a3 [i]);	
	}				
}
