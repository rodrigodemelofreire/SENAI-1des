#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	int n1, n2, n3;
	float media;
	
	printf("Digite as tr�s notas do aluno:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	//Processamento e Sa�da
	media = (n1 + n2 + n3) / 3;
	if(media >= 6){
		printf("Sua m�dia � %.1f voc� foi Aprovado",media);
	}else if (media >= 4){
		printf("Sua m�dia � %.1f voc� est� em Recupera��o",media);
	}else{
		printf("Sua m�dia � %.1f voc� foi Reprovado",media);
	}
}
