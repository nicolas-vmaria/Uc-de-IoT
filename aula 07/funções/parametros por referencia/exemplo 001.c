#include <stdio.h>
#include <string.h>
#include <locale.h>
int soma_dobro(int *a, int *b); // esta linha descreve o protótipo da função

int main(){
	setlocale(LC_ALL,"portuguese");
	int x,y,res;
	printf("\nDigite o primeiro número: ");
	scanf("%d%*c",&x);
	printf("\nDigite o segundo número: ");
	scanf("%d%*c",&y);
	
	res = soma_dobro(&x,&y);
	printf("A soma do dobro dos números %d e %d: %d",x,y,res);
	getchar();
	return 0;
}
int soma_dobro(int *a, int *b){
	int soma;
	*a = 2*(*a);
	*b = 2*(*b);
	soma = *a + *b;
	return soma;
}