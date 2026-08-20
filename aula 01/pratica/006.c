#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float a,b,c;
    float p1,p2,p3;
    float media;
    
    printf("Digite um número:");
    scanf("%f %f",&a,&p1);
    printf("Digite um número:");
    scanf("%f %f",&b,&p2);
    printf("Digite um número:");
    scanf("%f %f",&c,&p3);
    
    media = (a * p1 + b * p2 + c * p3) / (p1 + p2 + p3);
    
    printf("A media ponderada desses números é: %.2f",media);
    }
