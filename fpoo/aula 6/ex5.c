#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int v[10]; //vetor a ser classificado
	int i,j; //contadores
	int aux; //auxiliar para fazer trocas
	
	//10 entradas sem validação
	for (i = 0; i < 10; i++){
		printf("digite %d valor: ", i+1);
		scanf("%d", &v[i]);
		}
	
	//process- algoritmo de classificação e troca
	for(i = 0; i < 10; i++){
		for (j = i + 1; j < 10; j++){
			if(v [i] > v [j]){
				aux = v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}

	//saida com vetor ordenado
	for (i = 0; i < 10; i++){
		printf("[%d]=%d\n", i+1,v[i]);
	} 
}
