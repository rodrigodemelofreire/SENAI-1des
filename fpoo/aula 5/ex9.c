#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int i,v[10];
	
	for (i = 0; i < 10; i++){
		printf("digite %d valor: ", i+1);
		scanf("%d", &v[i]);
		}
	}

