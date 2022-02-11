#include<stdio.h>
#define karebul(sayi) sayi*sayi 
int main(){
	int tamsayi =15;
	float ondalikli =6.9;
	int deger1=karebul(tamsayi);
	float deger2 = karebul(ondalikli);
	int deger3 = karebul(5+7); /*Bu kısımda ön işlemci oldugu için yaptıgı sey 5+7*5+7 şeklinde içine gelen veriyi iki
	kısımda yazmasıdır buda işlem önceliginden dolayı cevabı hatalı verecektir eger karebul(sayi) (sayi)*(sayi) şeklinde 
	olsaydı istedigimiz gibi 144 değerini verecekti */
	printf("deger1 : %d\ndeger2 : %f\ndeger3 : %d",deger1,deger2,deger3);
	return 0;
	
	
	
}
