#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int i, n, maior = 0;
	//Entrada e Processamento
	for(i = 0; i < 10; i++){
		n = -1;
		while(n < 0 || n > 32767){
			printf("Digite o %d� n�mero: ", i+1);
			scanf("%d",&n);
		}
		if(n > maior)
			maior = n;
	}
	//Sa�da
	printf("O maior n�mero digitado foi %d",maior);
}
