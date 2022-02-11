#include<stdio.h> //standart girdi ve cıktı kütüphanesi
char a[100];
int main()
{
	printf("adiniz :"); // ekrana cikti verme 
	scanf("%s",a); //kullanicidan veri alma
	printf("isminiz  : %s",a);
	return 0;	
}
