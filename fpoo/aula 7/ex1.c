#include <stdio.h>
#include <locale.h>
#include <time.h>

int main (){
	setlocale (LC_ALL,"");
	char nomes[5][10];
	float salarios[5];
	float percentual;
	int i;
	
//entrada 
	
	printf ("Digite o nome dos funcionarios: ");
	for(i = 0; i < 5; i++){
		scanf ("%s", &nomes[i]);
	}
	printf ("Digite os salarios dos funcionarios: \n");
	for (i = 0; i < 5; i++){
		do{
			scanf("%f", &salarios[i]);
		}while (salarios[i] < 0 || salarios[i] > 1000000);
	}
	printf ("Digite o percentual (%%) de reajustes: \n");
	do{
		scanf("%f", &percentual);
	}while (percentual < 0 || percentual > 1000000);
	
//processamento 

	for (i = 0; i < 5; i++){
		salarios[i] = salarios[i] * percentual / 100 + salarios[i];
		printf ("%s - novo salario: R$%.2f \n", nomes[i], salarios[i]);
	}	
}
