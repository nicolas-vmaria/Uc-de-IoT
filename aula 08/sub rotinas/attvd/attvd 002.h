#include <stdio.h>
#include <string.h>
#include <locale.h>

int soma_dos_num(int num1,int num2){
	int acumulativo, i;
	if(num1 > num2){
		return 0;
	}
	else{
	for(i = num1+1; i < num2; i++){
		acumulativo += i;
	}
	return acumulativo;
	}
}