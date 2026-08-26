#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float media,nota1,nota2,totalTurma,mediaTurma;
	int cont,aprovados,exame,reprovados;
	
	cont=1;
	aprovados=0;
	exame=0;
	reprovados=0;
	
	while(cont <= 6){
		printf("Digite a nota do aluno:");
		scanf("%f*c",&nota1);
		printf("Digite a nota do aluno:");
		scanf("%f*c",&nota2);
		
		media=(nota1+nota2)/2;
		
		if(media <= 3){
			reprovados++;
		}
		else if(media <=7){
			exame++;
		}
		else if(media >7){
			aprovados++ ;
		}
		printf("\nA média é: %.1f\n",media);
		totalTurma= totalTurma + media;
		cont++;
	}
	mediaTurma= totalTurma/6;
	
	printf("\nO total de alunos aprovados é: %d",aprovados);
	printf("\nO total de alunos em exame é: %d",exame);
	printf("\nO total de alunos reprovados é: %d",reprovados);
	printf("\nA média da turma é: %f",mediaTurma);
}