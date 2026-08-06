#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba o salário de um funcionário, calcule e mostre:
- O salário atual,
- O valor do aumento,
- O novo salário, sabendo-se que este sofreu um aumento de 25%
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float salario, aumento, novoSalario;
    
    printf("Digite seu salário e aperte a tecla enter:");
    scanf("%f%*c", &salario);
    
    aumento = salario * 0.25;
    novoSalario= salario + aumento;
    
    printf("Seu salário é: %.2f",salario);
    printf("\nO valor do seu aumento é: %.2f",aumento);
    printf("\nSeu novo salário é: %.2f",novoSalario);
    
    system("pause");
    return 0;
    }
