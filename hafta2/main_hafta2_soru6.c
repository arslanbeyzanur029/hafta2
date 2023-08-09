#include <stdio.h>
#include <stdlib.h>



int main() {
	int index,toplam=0;
	printf("en fazla 10 olabilecek sekilde index degeri giriniz:");
	scanf("%d",&index);
	int dizi[index];
	int *pointer;
	for(pointer=dizi;pointer<dizi+index;pointer++){
		printf("eleman giriniz:");
		scanf("%d",pointer);
		toplam=toplam+*pointer;
	}
	printf("eleman toplamlari:%d",toplam);
	
	return 0;
}
