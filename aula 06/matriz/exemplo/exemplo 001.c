#include <stdio.h>
#include <stdlib.h>

int main(){
	int x[3][4],i=0,j=0;
	
	for(i=0;i<3;i++){
		printf("Elementos da linha %d",i);
		for(j=0;j<4;j++){
			printf("%d",x[i,j]);
		}
	}
}