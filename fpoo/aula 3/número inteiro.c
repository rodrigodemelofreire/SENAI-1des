/*Desenvolva um programa que 
leia um n�mero �n� inteiro, 
positivo e diferente de zero 
e apresente na tela: 
n � 1, e tamb�m n + 1.*/
#include <stdio.h>
#include <locale.h>
	int main (){
		setlocale(LC_ALL,"");
		int Y,X,Z;
		printf("digite um n�mero: ");
		scanf("%d", &Y);
		X = Y - 1;
		Z = Y + 1;
		printf("o resultado positivo � %d \n", Z);
		
		printf("o resultado negativo � %d", X);
	}
