#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

bool eIgual(int n1, int n2); //assinatura
int main(){
	setlocale (LC_ALL,"");
	int n1, n2;
	printf("digite dosi numeros inteiros: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	if(eIgual(n1,n2))
		printf("os numeros são iguais.");
	else
		printf("os numeros são diferentes");
}

//função

bool eIgual(int n1, int n2){
	if(n1 == n2)
		return true;
	else
		return false;
}