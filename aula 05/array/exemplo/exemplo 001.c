#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[5] = {1,2,3,4,5};
	int v1[5];
	//v1 = v;
	int i;
	for (i=0; i<5; i++){
	
		v1[i] = v[i];
		printf("%d \n",i);
	}
}