#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	float salario, salFamilia = 0;
	int filhos;
	//Entradas
	printf("Digite seu sal�rio: ");
	scanf("%f",&salario);
	printf("Quantos filhos voc� tem? ");
	scanf("%d",&filhos);
	//Processamento
	if(salario < 1655.98){
		salFamilia = 56.47 * filhos;
	}	
	//Sa�das
	printf("O seu sal�rio � R$ %.2f \n",salario);
	printf("O sal�rio fam�lia � R$ %.2f\n",salFamilia);
	printf("O sal�rio final � R$ %.2f",salario + salFamilia);
}
