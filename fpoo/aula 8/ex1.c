#include <locale.h>
#include <stdio.h>
void decBin(int n); //assinatura da função

int main(){
	setlocale(LC_ALL,"");
	int num;
	printf("digite o numero inteiro para ser convertido em binario: ");
	scanf("%d", &num);	
	printf ("o número %d em binario é ", num);
	decBin(num);
}

//função para comverter o numero

void decBin(int n){
	int v[50];
	int i = 0, j;
	if(n == 0) printf("0");
	while (n > 0){
		v[i] = n % 2;
		i++;
		n = n / 2;
	}
	for (j = i -1; j >= 0; j--)
			printf("%d", v[j]);
}
