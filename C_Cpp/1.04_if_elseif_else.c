#include<stdio.h>
int main(){
	int i  ;
	printf("deger girin \n");
	scanf("%d",&i);
	
	if(i<2){ // eger ifden sonra tek satır varsa "{" gerek yoktur
		printf(" <2 ");
		
	}
	else if(i<5){
		printf(" <5 ");
	}
	else{
		printf(" 5=> ");
	}
		
   return 0;
	
}
