#include<stdio.h>
int main(){
	int deger;
	printf("enter a value = ");
	scanf(" %d",&deger);
	for(int i=0;i<=deger;i++){
		for(int a=0;a<i;a++){
			printf("*");
		}
	printf("\n");	
	}
return 0;	
}
