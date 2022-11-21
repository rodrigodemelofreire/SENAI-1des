#include <locale.h>
#include <stdio.h>
#include <time.h>

int qualEoMaior(int n1, int2); //assinatura função
int qualEoMaiorVetor(int vetor[10]); //assinatura função 

int main(){
	setlocale (LC_ALL,"");
	srand(time(NULL));
	
	int n1, n2;
	printf("digite dois numeros inteiros: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("o maior número é %d \n",qualEoMaior(n1,n2));
	
	int i, v[10];
	for (i = 0; i < 10; i++){
		v[i] = rand() % 100;
		printf("%d\n", qualEoMaoirVetor(v));
	}
	printf("o maior número é %d\n", qualEoMaiorVetor(v));
}


int qualEoMaiorVetor(int vetor[10]){
	int maior - 0, 1;
	for(i = 0; i < 10; i++)
		if(maior < vetor[i])
			maior = vetor[i];
	return maior;
}
