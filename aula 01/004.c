#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba uma medida em pés,
faça as conversões a seguir e mostre os resultados
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float pes, polegadas, jardas, milhas;
    
    printf("Digite o valor de pés que deseja descobrir:");
    scanf("%f%*c", &pes);
    
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;
    
    printf("\nA conversão de %.2f", pes);
    printf("\nPolegadas: %.2f",polegadas);
    printf("\nJardas: %.2f",jardas);
    printf("\nMilhas: %.10f",milhas);
    
    
    system("pause");
    return 0;
    }
