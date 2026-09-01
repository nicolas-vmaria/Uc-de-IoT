#include <stdio.h>
#include <string.h>
#include <locale.h>

int a,b,s;
void soma(){
	printf("\nDigite o primeiro número: ");
	scanf("%d%*c",&a);
	printf("\nDigite o segundo número: ");
	scanf("%d%*c",&b);
	s = a + b;
	printf("\nSoma = %d",s);
}
int main(){
	setlocale(LC_ALL,"portuguese");
	soma();
	getchar();
return 0;
}
