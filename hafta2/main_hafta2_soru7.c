#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	char dizi[100];
	char * ptr1,*ptr2;
	char gecici;
	int i;
	printf("lutfen string bir iafede giriniz:");
	gets(dizi);
	ptr1=dizi;
	ptr2=dizi+strlen(dizi)-1;
	while(ptr1<ptr2){
		gecici=*ptr2;
		*ptr2=*ptr1;
		*ptr1=gecici;
		ptr1++;
		ptr2--;
	}
	for(i=0;i<strlen(dizi);i++){
		printf("%c",dizi[i]);
	}
	return 0;
}
