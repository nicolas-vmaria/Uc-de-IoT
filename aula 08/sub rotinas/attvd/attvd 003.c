#include <stdio.h>
#include <string.h>
#include "C:\Users\nicolas_maria.EDU_FIESC\Desktop\Uc-de-IoT\aula 08\sub rotinas\attvd\attvd 003.h"

int main(){
	int seg_totais,hrs,min,seg;
	
	printf("Digite o valor em segundos: ");
	scanf("%d%*c",&seg_totais);
	
	converter_segundos(seg_totais,&hrs,&min,&seg);
	
	printf("%d segundo(s) equivale(m) a %d hora(s), %d minuto(s) e %d segundo(s)",seg_totais,hrs,min,seg);
	
}