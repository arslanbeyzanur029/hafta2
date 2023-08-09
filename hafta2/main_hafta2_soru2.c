#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,toplam;
	int *ptr1=&a;
	int *ptr2=&b;
	printf("ilk sayiyi giriniz:");
	scanf("%d",ptr1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",ptr2);
	toplam=*ptr1+*ptr2;
	printf("%d",toplam);
	return 0;
}
