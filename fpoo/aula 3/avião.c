/*Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 
900 km/h, fa�a um programa que leia uma dist�ncia (km), calcule 
e apresente na tela, quanto tempo (horas) 
ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada.*/

#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	float preco;
	//Entrada
	printf("Digite o pre�o do produto: ");
	scanf("%f",&preco);
	//Processamento com condicionais "if" ou "se" ou "caso"
	if(preco > 1000){
		preco = preco - preco * 8 / 100;
	}
	//Saida
	printf("O pre�o final � R$ %.2f",preco);
}
