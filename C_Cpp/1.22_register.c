#include<stdio.h>
int main (){
	register int a =10 ; // bilgiyi CPU yazar bu sayede daha hızlı cagrılır
	int  b = 12;
	int c = a+b;
	printf("total = %d",c);
	return 0;
	
}
