#include <stdio.h>
#include <stdlib.h>



int main() {
	char dizi[100];
	char *pointer;
	printf("bir string ifade giriniz:");
	gets(dizi);
	for(pointer=dizi;*pointer;pointer++){
	}
	printf(" '%s ' ifadesinin uzunlugu %d dir",dizi,pointer-dizi);
	return 0;
}
