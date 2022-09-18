#include <stdio.h>
#include <locale.h>
#include <time.h>
int main (){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int v [10];
	int i, num, encontrado = 0;
	//gerador
	for (i = 0;
	 i < 10; i++){
		v[i] = rand();
		printf ("[%d]%d \n", i, v[i]);
	}
	//entrada
	printf ("digite um numero inteiro: ");
	scanf ("%d", &num);
	
	while (!encontrado){
		if (v [i] == num)
			encontrado = 1;
		i++;
		if(i == 10) break;
	}
	
	if (encontrado) printf ("encnotrei está no vetor [%d]", i - 1);
	else print ("não encontrado");
	 
}
