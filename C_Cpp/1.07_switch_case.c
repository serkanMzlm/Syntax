#include<stdio.h>
int main(){
	int a ;
	printf("enter a value\n");
	scanf("%d",&a);
	switch(a){
		case 0: printf("value entered 0");
		break;
		case 1: printf("value entered 1");
		break;
		case 3: printf("value entered 2");
		break;
		default :
			printf("value entered %d",a);
			break;
	}
	return 0;
	
}
