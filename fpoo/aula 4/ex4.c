#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	float a,b,c;
	//Entradas
	printf("Digite o comprimento do primero lado do tri�ngulo: ");
	scanf("%f",&a);
	printf("Digite o comprimento do segundo lado do tri�ngulo: ");
	scanf("%f",&b);
	printf("Digite o comprimento do terceiro lado do tri�ngulo: ");
	scanf("%f",&c);
	//Processamento
	if(a == b && b == c){
		printf("O tri�nguo � EQUIL�TERO");
	}else if(a != b && b != c && a != c){
		printf("O tri�nguo � ESCALENO");
	}else{
		printf("O tri�nguo � IS�SCELES");
	}
}
