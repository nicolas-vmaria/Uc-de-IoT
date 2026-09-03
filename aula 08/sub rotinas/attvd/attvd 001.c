#include <stdio.h>
#include <string.h>
#include "C:\Users\nicolas_maria.EDU_FIESC\Desktop\Uc-de-IoT\aula 08\sub rotinas\attvd\attvd 001.h"

int main(){
	int num,res;
	
	printf("Digite um número: ");
	scanf("%d%*c",&num);
	
	res = pos_neg(num);
	
	if(res == 1){
		printf("Número positivo");
	}
	else if(res == 0){
		printf("Número negativo");
	}
	else if(res == 2){
		printf("Zero");
	}
}