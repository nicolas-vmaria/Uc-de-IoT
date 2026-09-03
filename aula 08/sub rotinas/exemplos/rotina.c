#include <stdio.h>
#include <locale.h>
#include "C:\Users\nicolas_maria.EDU_FIESC\Desktop\Uc-de-IoT\aula 08/rotinas.h"

int main(){
	setlocale(LC_ALL,"portuguese");
	int num1, num2, res;
		sub_rotina1();
		sub_rotina2();
		printf("Digite um número: ");
		scanf("%d%*c",&num1);
		printf("Digite outro número: ");
		scanf("%d%*c",&num2);
		res = sub_rotina3(num1,num2);
		printf("resultado = %d",res);
	getchar();
	return 0;
}