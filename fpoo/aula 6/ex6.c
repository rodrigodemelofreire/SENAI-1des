#include <stdio.h>
#include <locale.h>
#include <time.h>

int main (){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //utiliza relogio dopc para gerar pseudos aleatórios	
	int vetor[100]; //vetor a ser classificados
	int i = 0, j; //contadores
	int aux; //auxiliar nas trocas
	int igual; //valida um numero aleatorio é igual a algum outro 
	
//gera 100 numeros aleatorios de 0 a 1000
	i = 0;
	do{
		aux = rand () % 1000;
		igual = 0;
		for (j = 0; j < 100; j++){
			if (vetor[j] == aux) igual = 1;
		}
		if(igual == 0){
			vetor[i] = aux;
			i++;
		}
	}while(i < 100);
 
//processamento
	for (i = 0; i < 100; i++){
		for (j = i + 1; j < 100; j++){
			if (vetor[i] > vetor [j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}	
	}
//saida	
	for(i = 0; i < 100; i++){
		printf("%d valor : %d\n", i + 1,vetor[i]);
	}

}
