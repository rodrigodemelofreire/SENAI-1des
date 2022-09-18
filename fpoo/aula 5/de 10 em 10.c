/*faça um programa que imprima na tela valores
 num intervalo rntre 10 e 200*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL,"");
	int i;
	int tabulacao = 20;
	for(i = 11; i < 200; i++){
		if (i<100) printf("0");{
			printf("%d", i);
			if (tabulacao == i){
				printf("\n");
				tabulacao += 10;
			}else{
				printf("\t");
			}
			}
			
		}
	}
	

