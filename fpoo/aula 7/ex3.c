/*(3) Desenvolva um programa que leia o nome e o pre�o de 5 mercadorias. 
Se o pre�o for menor do que 1000 ter� um aumento de 5% no pre�o da mercadoria, sen�o o aumento ser� de 7%. 
Mostrar o nome das mercadorias e o seu novo pre�o.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	char mercadorias [5] [10];
	float precos [5], novopreco [5];
	
	int i;
	
	printf("digite o nome e o pre�os das 5 mercadorias: \n");
	for(i = 0; i < 5; i++){
		scanf ("%s", &mercadorias[i]);
		scanf ("%f", &precos[i]);
		if(precos [i] < 1000){
			novopreco[i] = precos[i] + precos[i] * (float)5/100;
		}else{
			novopreco[i] = precos[i] + precos[i] * 0.07;
		}
	}
		printf("mercadorias\t novo pre�o\n");
	for(i = 0; i < 5; i++){
		printf("%s\t%.2f\n", mercadorias[i], novopreco[i]);
	}
}
