#include <stdio.h>
#include <string.h>
#include "C:\Users\nicolas_maria.EDU_FIESC\Desktop\Uc-de-IoT\aula 08\sub rotinas\attvd\attvd 004.h"

int main(){
	int maior, menor, n1, n2, n3, n4;
	
	printf("Digite 4 números separadamente: ");
	scanf("%d %d %d %d*c",&n1,&n2,&n3,&n4);
	
	maior_e_menor(n1,n2,n3,n4,&maior,&menor);
	
	printf("O maior número é %d, e o menor é %d", maior, menor);
}