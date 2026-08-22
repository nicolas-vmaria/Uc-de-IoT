#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char op;
	float num1,num2;
		printf("Digite dois números e um operador respectivamente.\n");
		scanf("%f %f %c", &num1,&num2,&op);
	switch (op){
		case '+':
			printf(" = %.2f", num1+num2);
		break;
		case '-':
			printf(" = %.2f",num1-num2);
		break;
        case '*':
			printf(" = %.2f",num1*num2);
		break;
        case '/':
			printf(" = %.2f",num1/num2);
		break;
		default:
			printf("Operador invalido");
	}
}