#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char ch;
	ch = getchar ();
	if (ch == 'p')
		printf("Você pressionou a tecla p");
}