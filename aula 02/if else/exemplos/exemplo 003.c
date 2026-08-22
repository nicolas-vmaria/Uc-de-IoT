#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char ch;
	printf("Digite uma letra entre A e Z");
	ch = getchar();
	if (ch>= 'A')
		if (ch <= 'Z')
			printf("Você acertou");
}