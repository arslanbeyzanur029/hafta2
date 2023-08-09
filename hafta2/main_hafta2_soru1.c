#include <stdio.h>
#include <stdlib.h>
int teksayi(int *pointer,int index){

	if(index==0){
		return 0;
	}
	else if(pointer[index-1]%2!=0){
		return 1+teksayi(pointer,index-1);
	}
	else{
		return teksayi(pointer,index-1);
	}
}

int main() {
	int index;
	printf("diziniz kac indexli olacak?");
	scanf("%d",&index);
	int dizi[index];
	int *pointer;
	for(pointer=dizi;pointer<dizi+index;pointer++){
		printf("eleman giriniz:");
		scanf("%d",pointer);
	}
	pointer=dizi;
	printf("sonuc:%d",teksayi(pointer,index));
	return 0;
}
