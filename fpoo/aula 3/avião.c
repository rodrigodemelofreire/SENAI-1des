/*Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 
900 km/h, faça um programa que leia uma distância (km), calcule 
e apresente na tela, quanto tempo (horas) 
será necessário para um 747-300 sobrevoar a distância informada.*/

#include <stdio.h>
#include <locale.h>
int main(){
	//Configurações e variáveis
	setlocale(LC_ALL,"");
	float preco;
	//Entrada
	printf("Digite o preço do produto: ");
	scanf("%f",&preco);
	//Processamento com condicionais "if" ou "se" ou "caso"
	if(preco > 1000){
		preco = preco - preco * 8 / 100;
	}
	//Saida
	printf("O preço final é R$ %.2f",preco);
}
