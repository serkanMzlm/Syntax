#include<stdio.h>
int main(){
	unsigned int a = 18 ; // 00010010
	unsigned int b = 10 ; // 00001010
	unsigned int c = a & b ; //00000010
	unsigned int d = a|b ; //00011010
	unsigned int e = a^b ; // 00011000
	unsigned char f = ~a ; // b yi tamamen bir 11101101
    printf ("(a & b)= %u\n(a|b)= %u\n(a^b)= %u\n ~%d = %d",c,d,e,a,f);
	return 0;		
}
