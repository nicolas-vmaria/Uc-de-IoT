#include <stdio.h>
#include <string.h>
#include <locale.h>
int soma(int a, int b); // esta linha descreve o protótipo da função

int main(){
	setlocale(LC_ALL,"portuguese");
	int a,b,s;
	printf("\nDigite o primeiro número: ");
	scanf("%d%*c",&a);
	printf("\nDigite o segundo número: ");
	scanf("%d%*c",&b);
	
	s = soma(a,b);
	printf("Resultado: %d",s);
	getchar();
	return 0;
}
int soma(int a, int b){

	return a+b;
}