#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int i, x = -1;
	//Entrada
	while(x < 0 || x > 10){
		printf("Digite um n�mero de 0 a 10: ");
		scanf("%d",&x);
	}
	//Processamento e sa�da
	for(i = 0; i <= 10; i++)
		printf("%d x %d = %d\n",x,i,(x*i));
}
