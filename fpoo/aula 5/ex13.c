#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	int n1 = 32767, n2 = 0, n3 = 0, n4 = 0;
	int i, n;
	//Entrada e Processamento
	for(i = 0; i < 4; i++){
		n = -1;
		while(n < 0 || n > 32767){
			printf("Digite o %d� n�mero: ",i + 1);
			scanf("%d",&n);
		}
		if(i == 3){
			if(n > n3) n4 = n;
			else if(n > n2){
				n4 = n3;
				n3 = n;
			}else if(n > n1){
				n4 = n3;
				n3 = n2;
				n2 = n;
			}else{
				n4 = n3;
				n3 = n2;
				n2 = n1;
				n1 = n;				
			}
		}else{
			if(i == 2){
				if(n > n1 && n < n3) n2 = n;
				else if(n > n3) n2 = n3;
				else if(n < n1) n2 = n1;
			}
			if(n < n1) n1 = n;
			if(n > n3) n3 = n;
		}
	}
	//Sa�da
	printf("%d %d %d %d", n1, n2, n3, n4);
}

