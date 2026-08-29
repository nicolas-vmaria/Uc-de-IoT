#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[10],nenhum=0;

    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++){
        if(num[i] > 50){
            printf("O numero %d da posicao %d\n",num[i],i);
            nenhum=1;
        }
    }
    if(!nenhum){
        printf("Nenhum numero maior que 50 foi digitado");
    }
    system("pause");
}