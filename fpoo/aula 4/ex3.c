#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	float salario, inssReal, inssPorcento = 0, salFinal;
	//Entrada
	printf("Digite o seu sal�rio: ");
	scanf("%f",&salario);
	//Processamento (Ordenando de forma crescente)
	if(salario < 1212.01){
		inssPorcento = 7.5 / 100;
		inssReal = salario * inssPorcento;
	}else if(salario < 2427.36){
		inssPorcento = (float) 9 / 100;
		inssReal = salario * inssPorcento;
	}else if(salario < 3641.04){
		inssPorcento = (float) 12 / 100;
		inssReal = salario * inssPorcento;
	}else if(salario < 7087.23){
		inssPorcento = (float) 14 / 100;
		inssReal = salario * inssPorcento;
	}else{
		inssPorcento = (float) 14 / 100;
		inssReal = 7087.22 * inssPorcento;
	}
	salFinal = salario - inssReal;
	//Sa�da
	printf("O desconto do INSS ser� de R$ %.2f\n",inssReal);
	printf("O sal�rio final ser� de R$ %.2f",salFinal);
}
