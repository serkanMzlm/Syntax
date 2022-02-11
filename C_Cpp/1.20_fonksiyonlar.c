#include<stdio.h>
int toplama(int ,int);
int main(){
	int value1,value2;
	
	printf("enter value = ");
	scanf("%d",&value1);
	printf("\nenter value = ");
	scanf("%d",&value2);
	int total=toplama(value1,value2);
	printf("\ncollection = %d ",total);

}
toplama(int value1,int value2 ){ //int on tanımlı oldugu icin belirtilmek zorunda degil
	int toplam = value1+value2;
	return toplam;
}
