#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int nasc,temp,falecida,cont=0,contFem=0,contMasc=0,contTotal=0,contFalecidaFem=0,contFalecidaMasc=0;
	char sexo;
	float percFalecidaFem,percFalecidaMasc,perc24meses;

	printf("Quantas pessoas nasceram no periodo?");
	scanf("%d%*c",&nasc);

	while(cont<nasc){
		printf("Qual o sexo da criança?(F/M) ");
		scanf("%c%*c",&sexo);
		printf("Quanto tempo de vida da criança?(em meses) ");
		scanf("%d%*c",&temp);
		printf("A criança faleceu?(1 para sim, 0 para não) ");
		scanf("%d%*c",&falecida);

		if(sexo == 'F'){
			contFem++;
			if(falecida == 1){
				contFalecidaFem++;
			}
		}
		else if(sexo == 'M'){
			contMasc++;
			if(falecida == 1){
				contFalecidaMasc++;
			}
		}
		if(temp<=24){
			contTotal++;
		}
		cont++;
	}

	if(contFem > 0){
		percFalecidaFem = ((float) contFalecidaFem / contFem) * 100;
	}
	else{
		percFalecidaFem = 0;
	}

	if(contMasc > 0){
		percFalecidaMasc = ((float) contFalecidaMasc / contMasc) * 100;
	}
	else{
		percFalecidaMasc = 0;
	}

	if(nasc > 0){
		perc24meses = ((float) contTotal / nasc) * 100;
	}
	else{
		perc24meses = 0;
	}


	printf("Total de crianças do sexo feminino: %d\n", contFem);
	printf("Total de crianças do sexo masculino: %d\n", contMasc);
	printf("Total de crianças falecidas: %d\n", contFalecidaFem + contFalecidaMasc);
	printf("Total de crianças com 24 meses ou menos: %d\n", contTotal);


	printf("Percentual de crianças falecidas do sexo feminino: %.2f%%\n", percFalecidaFem);
	printf("Percentual de crianças falecidas do sexo masculino: %.2f%%\n", percFalecidaMasc);
	printf("Percentual de crianças com 24 meses ou menos: %.2f%%\n", perc24meses);

	system("pause");
	return 0;
}