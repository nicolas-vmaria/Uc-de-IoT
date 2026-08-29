#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char carros[5][20],melhorCarro[20];
    float consumo[5],quantoLPara1000km,melhorConsumo=0;;

    for(int i=0;i<2;i++){
        printf("Digite um modelo de carro: ");
        scanf("%s",&carros[i]);
        printf("Digite o consumo(km/l) do carro: ");
        scanf("%f",&consumo[i]);
        
        if(i==0){
            melhorConsumo = consumo[i];
            strcpy(melhorCarro,carros[i]);
        }
        if(consumo[i] > melhorConsumo){
            melhorConsumo = consumo[i];
            strcpy(melhorCarro,carros[i]);
        }
        
        quantoLPara1000km = 1000 / consumo[i];

        printf("O carro %s gasta %.2f litros para percorrer 1000 km\n",carros[i],quantoLPara1000km);
    }
    printf("O veiculo com melhor consumo eh o %s com %.2f km/l\n",melhorCarro,melhorConsumo);
    system("pause");
}