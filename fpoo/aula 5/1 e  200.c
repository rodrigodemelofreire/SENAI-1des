/*faça um programa que imprima na tela os 
valores no intervalo entre 200 e 1*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int i;
	int tabulacao = 20;
	for(i = 200; i > 1; i++){
		if (i>100) printf("0");{
			printf("%d", i);
			if (tabulacao == i){
				printf("\n");
				tabulacao -= 10;
			}else{
				printf("\t");
			}
			}
			
		}
	}


