#include <stdio.h>
#include <locale.h>
int main(){
		/* 
		Desenvolva um programa que leia tr�s vari�veis 
		(a, b, c) e resolva a express�o: ( a + b ) / c.
		*/
	setlocale(LC_ALL,""); //permite que o programa leia acentos
	int a,b,c,d; 
	printf ("digite um numero inteiro: ");
	scanf("%d",&a);
	printf ("digite outro numero inteiro: ");
	scanf("%d",&b);
	printf ("digite mais outro numero inteiro: ");
	scanf("%d",&c);
	d = (a + b) / c;
	printf("a soma dos tr�s numeros �: %d",d);
}
