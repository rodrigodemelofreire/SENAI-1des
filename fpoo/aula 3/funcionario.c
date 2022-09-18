/*Desenvolva um programa que leia o nome e o salário de uma 
pessoa,  edepois leia o valor do índice percentual (%) 
de reajuste do salário. Calcule e apresente na tela, 
o valor do novo salário e o nome da pessoa.*/
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
	
	printf("o novo salario do %s é: R$ %.2f", nome, novosalario);
}

