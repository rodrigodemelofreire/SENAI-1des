 /*Desenvolva um programa que leia o nome e 
o preço de uma mercadoria. O programa deverá 
calcular um aumento de 5% no preço da mercadoria e 
mostrar o nome da mercadoria e o seu novo preço.*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int main;
	float preco, aumento, novopreco;
	char nome [15];
	
	printf("digite a mercadoria: \n");
	scanf("%s", &nome);
	printf("insira o preço: \n");
	scanf("%f", &preco);

	novopreco = preco + 100 / 5;
	
		printf("o preço da %s é agora: R$ %.2f", nome, novopreco);
	
}