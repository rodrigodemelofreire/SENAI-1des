/*Desenvolva um programa que leia a velocidade de um carro (km/h) 
e a dist�ncia a ser percorrida (km) por ele. Calcule e apresente 
na tela, quanto tempo (horas) 
ser� necess�rio para o carro percorrer a dist�ncia informada.*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int velocidade, distancia;
	float tempo;
	printf ("digite a quantidade a velocidade em km/h: ");
	scanf ("%d",&velocidade);
	printf ("digite a distancia km: ");
	scanf ("%d", &distancia);
	tempo = velocidade / distancia;
	printf ("essa distancia sera percorrida em %.1f horas ", tempo);
	
}
