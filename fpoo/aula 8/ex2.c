#include <stdio.h>
#include <locale.h>
float parafahrenheit (float celsius);

int main (){
	setlocale(LC_ALL,"");
	float c, f;
	printf ("digite a temperatura em graus celsius: ");
	scanf ("%f, &c");
	f = parafahrenheit(c);
	printf("temperatura em C°%.1f em F°%.1f", c, f);
}

float parafahrenheit (float celsius){
	return celsius * 9 / 5 + 32;
}
