#include <stdio.h>
#include <string.h>
#include <locale.h>

void converter_segundos(int seg_totais,int *hrs,int *min,int *seg){
	
	*hrs = seg_totais / 3600;
	*min = (seg_totais % 3600) / 60;
	*seg = seg_totais % 60;
}