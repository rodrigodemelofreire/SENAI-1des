#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int v1 = -1, v2 = -1;
	int i;
	while(v1 < 0 || v1 > 32767){
		printf("Digite um valor inteiro: ");
		scanf("%d",&v1);
	}
	while(v2 < 0 || v2 > 32767){
		printf("Digite outro valor inteiro: ");
		scanf("%d",&v2);
	}
	if(v2 < v1){
		int aux = v1;
		v1 = v2;
		v2 = aux;
	}
	for(i = v1 + 1; i < v2; i++){
		if(i % 2 == 0){
			printf("%d ",i);
		}
	}
}
