#include <stdio.h>
#include <string.h>
#include <locale.h>
int soma(){
	int a,b,s;
	printf("\nDigite o primeiro número: ");
	scanf("%d%*c",&a);
	printf("\nDigite o segundo número: ");
	scanf("%d%*c",&b);
	s = a + b;
	return s;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	int s;
	s = soma();
	printf("\nSoma = %d",s);
	getchar();
	return 0;
}