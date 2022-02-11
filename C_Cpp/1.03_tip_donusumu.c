#include<stdio.h>
int main (){
float sayi0= 7/3;
float sayi1= 7/(float)3;  // faklı tipler arası dönüşüm
float sayi2= (float)7/3;
float sayi3= (float)(7/3);
printf("number0= %f\n",sayi0);
printf("number1= %f\n",sayi1);
printf("number2= %f\n",sayi2);
printf("number3= %f\n",sayi3);
return 0;
}
