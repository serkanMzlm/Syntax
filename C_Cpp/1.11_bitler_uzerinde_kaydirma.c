#include<stdio.h>
int main (){
	unsigned int a = 8;    // 00001000
	unsigned int b = a>>1; // 00000100
	unsigned int c = a>>2; // 00000010
	unsigned int d = a<<1; // 00010000
	unsigned int e = a<<2; // 00100000
	printf("a=%u\nb=%u\nc=%u\nd=%u\ne=%u\n",a,b,c,d,e);
	return 0;	
	
}
