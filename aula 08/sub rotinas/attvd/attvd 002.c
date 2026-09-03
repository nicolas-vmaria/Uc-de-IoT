#include <stdio.h>
#include <string.h>
#include "C:\Users\nicolas_maria.EDU_FIESC\Desktop\Uc-de-IoT\aula 08\sub rotinas\attvd\attvd 002.h"

int main(){
	int num1,num2,res;
	
	printf("Digite um numero: ");
	scanf("%d%*c",&num1);
	printf("Digite outro numero: ");
	scanf("%d%*c",&num2);
	
	res = soma_dos_num(num1,num2);
	
	printf("A soma dos números entre os passados é: %d",res);
	
}