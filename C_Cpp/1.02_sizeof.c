#include<stdio.h>
int main (){
	char a= 'A'; // yada char a 65; şeklinde yazıla bilir
	int  b= 35;
	float c= 30.3;
	printf("char footprint : %lu byte \n",sizeof(a)); //sizeof bellekte kapladıkları alanlari gosterir 
	printf("int footprint : %lu byte \n",sizeof(b));
	printf("float footprint : %lu byte \n",sizeof(c));
	printf("double footprint : %lu byte \n",sizeof(double));
	return 0;
	
	
}
