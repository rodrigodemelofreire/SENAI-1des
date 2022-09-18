/*4 - Localize um valor informado pelo usuário dentro de um vetor com dimensão 10;*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"");
	
	int a1[10], i = 0, x, j=1;
	
		printf ("Valor do vetor: \n");
	for (i = 1; i < 10; i++) { 
		printf ("Digite o valor da posição %dº ", j);
		scanf ("%d", &a1 [i]);
		j++;
	}
	
	printf ("\n informe o valor desejado: ");
	scanf ("%d", &x);
	printf ("%d", a1[x]);
	
	}

