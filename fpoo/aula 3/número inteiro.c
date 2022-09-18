/*Desenvolva um programa que 
leia um número ”n” inteiro, 
positivo e diferente de zero 
e apresente na tela: 
n – 1, e também n + 1.*/
#include <stdio.h>
#include <locale.h>
	int main (){
		setlocale(LC_ALL,"");
		int Y,X,Z;
		printf("digite um número: ");
		scanf("%d", &Y);
		X = Y - 1;
		Z = Y + 1;
		printf("o resultado positivo é %d \n", Z);
		
		printf("o resultado negativo é %d", X);
	}
