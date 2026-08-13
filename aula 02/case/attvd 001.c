#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int mes, dia;
		printf("Digite o mes e o dia que voce nasceu:");
		scanf("%d %d", &mes,&dia);
		
	if(dia > 31)
		printf("Numero invalido");
		
	else if(dia <= 0)
		printf("Numero invalido");
	
	else if((mes == 02) && (dia > 28))
		printf("Numero invalido");
	else 
		switch (dia, mes){
			case '01':
				printf(" = %.2f", num1+num2);
			break;
			case '02':
				printf(" = %.2f",num1-num2);
			break;
			default:
				printf("Operador invalido")
	}
}