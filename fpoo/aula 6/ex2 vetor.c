#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	int v[10];
	int i, somapar, somaimpar, qtdpar, qtdimpar, mediapar, mediaimpar, contpar, contimpar;
	
		//entradas
		for(i = 1; i <= 10; i++){
		printf("digite o %d numeros inteiros entre  0 e 1000: ", i);
		scanf ("%d", &v[i]);
	}
	
		//processamento
		for(i = 0; i < 10; i++){
			if(v[i] % 2 == 0){
				somapar += v[i];
				contpar ++;
			}else{
				somaimpar += v[i];
				contimpar++;
			}
		}
		mediapar = somapar / contpar;
		mediaimpar = somaimpar / contimpar;
		
		//saidas
		
		printf ("a soma e m�dia dos pares [%d] e [%d]\n", somapar, mediapar);
		printf ("a soma e m�dia dos impares [%d] e [%d]\n", somaimpar, mediaimpar);
		printf ("o total de n�meros pares [%d]\n", contpar);
		printf ("o total de n�meros impares [%d]\n", contimpar);
}
