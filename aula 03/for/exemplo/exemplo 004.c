#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,cont,num;
	cont = 0; //inicialização de variável CONT com o valor zero
		for(i=1;i<=5;i++){
			printf("Digite um número: ");
			scanf("%d%*c",&num);
			if(num>5)
				cont = cont + 1;	//contando mais 1 na variável CONT
		}
		printf("Quantidade de numeros maiores que 5 = %d",cont);
}