#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int v1 = -1, v2 = -1;
	int i;//Contador
	//Entrada com valida��o de n�meros entre 0 e 32767
	while(v1 < 0 || v1 > 32767){
		printf("Digite um valor inteiro: ");
		scanf("%d",&v1);
	}
	while(v2 < 0 || v2 > 32767){
		printf("Digite outro valor inteiro: ");
		scanf("%d",&v2);
	}
	//Algoritmo de TROCA caso o 2� n�mero seja menor do que 1�
	if(v2 < v1){
		int aux = v1;
		v1 = v2;
		v2 = aux;
	}
	//Processamento utilizando o algoritmo de Acumula��o
	int acumulado = 0;
	for(i = v1 + 1; i < v2; i++){
		acumulado += i;
	}
	printf("A soma dos valores entre %d e %d � %d", v1, v2, acumulado);
}
