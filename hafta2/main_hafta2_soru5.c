#include <stdio.h>
#include <stdlib.h>



int main() {
int dizi[10];
int *ptr1,*ptr2;
int gecici,index;
printf("diziniz kac elemanli olacak?");
scanf("%d",&index);
for(ptr1=dizi;ptr1<dizi+index;ptr1++){
	printf("eleman giriniz:");
	scanf("%d",ptr1);
}
printf("\n dizinin yer degistirmeden onceki hali:");
for(ptr1=dizi;ptr1<dizi+index;ptr1++){
	printf("%d ",*ptr1);
}
for(ptr1=dizi,ptr2=dizi+index-1;ptr1<ptr2;ptr1++,ptr2--){
	gecici=*ptr1;
	*ptr1=*ptr2;
	*ptr2=gecici;
}
printf("\ndizinin yer degistikten sonraki hali:");
for(ptr1=dizi;ptr1<dizi+index;ptr1++){
	printf("%d ",*ptr1);
}


	return 0;
}
