#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a;
		for(a=15;a>=1;a=a-2){
			printf("Digite um número: ");
			scanf("%d%*c",&a);
		}
}