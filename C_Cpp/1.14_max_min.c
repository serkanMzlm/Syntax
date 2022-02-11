#include<stdio.h> 
#include<limits.h> // kütüphane tam sayı ve türevlerini ait sabitler
#include<float.h> // kütüphane float ve türevlerine ait sabitler 
int main (){
	printf("int  minimum value : %d\n",INT_MIN); //int ninimum degeri
	printf("int maximum value : %d\n",INT_MAX); //int maksimum degeri
	printf("float minimum value : %.5g\n",FLT_MIN);
	printf("float maximum value : %.5g\n",FLT_MAX);
	printf("double maximum value : %.5Lg\n",DBL_MIN);
	printf("double minimum value : %.5Lg\n",DBL_MAX);
    return 0;
}
