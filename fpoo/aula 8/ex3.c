#include <stdio.h>
#include <locale.h>
float celsius  (float parafahrenheit );

int main (){
	setlocale(LC_ALL,"");
	float c, f;
	printf ("digite a temperatura em parafahrenheit: ");
	scanf ("%f, &c");
	c = celsius(f);
	printf("temperatura em F°%.1f em C°%.1f", c, f);
}

float celsius (float parafahrenheit){
	return parafahrenheit * 5 / 9 - 32;
}
