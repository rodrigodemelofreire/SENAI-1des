/*Desenvolva um programa que leia o nome e o sal�rio de uma 
pessoa,  edepois leia o valor do �ndice percentual (%) 
de reajuste do sal�rio. Calcule e apresente na tela, 
o valor do novo sal�rio e o nome da pessoa.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int main;
	float salario, percentual, novosalario;
	char nome[10];
	
	printf("digite o nome do funcionario: \n");
	scanf("%s",&nome);
	printf("digite o salario: \n");
	scanf("%f", &salario);
	printf("digite o percentual: \n");
	scanf("%f", &percentual);
	
	novosalario = salario + salario * percentual / 100;
	
	printf("o novo salario do %s �: R$ %.2f", nome, novosalario);
}

