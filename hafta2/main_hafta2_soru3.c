#include <stdio.h>
#include <stdlib.h>



int main() {
	int index,i=1;
	int *ptr;
	printf("diziniz kac elemanli olacak?");
	scanf("%d",&index);
	int dizi[index];
	for(ptr=dizi;ptr<dizi+index;ptr++,i++){
		printf("%d.eleman:",i);
		scanf("%d",ptr);
	}
	i=1;
	printf("ELEMANLAR:\n");
	for(ptr=dizi;ptr<dizi+index;ptr++,i++){
		printf("%d.eleman:%d\n",i,*ptr);
	}
	
	return 0;
}
