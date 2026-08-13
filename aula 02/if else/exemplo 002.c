#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	if(getchar() == 'p'){
		printf("Você digitou p");
		printf("\nPressione outra tecla");
		getchar ();
	}
}