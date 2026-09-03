#include <stdio.h>
#include <string.h>
#include <locale.h>

int pos_neg(int num){
	if(num > 0 ){
		return 1;
	}
	else if(num < 0){
		return 0;
	}
	else if(num == 0){
		return 2;	
}
}