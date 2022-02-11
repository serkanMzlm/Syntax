#include<stdio.h>
#include<stdarg.h>
#include<string.h>
int topla(int parametreSayisi,...);
int cikar(int parametreSayisi,...);
int main(){
int deger1,deger2;
//char islem[20];
//char cik[10]= "cikar";
//char top[10]="top"	;
printf("birinci sayiyi girin :");
scanf("%d",&deger1);	
printf("\nikinci sayiyi girin :");
scanf("%d",&deger2);
//printf("\nyapacaginiz islem :");
//scanf("%s",&islem);
topla(2,deger1,deger2);
cikar(2,deger1,deger2);
/*int dege1 = strcmp(islem,cik);
int dege2 = strcmp(islem,top);
if(dege1==0)
	cikar(2,deger1,deger2);
	else if(deger2==0)
		topla(2,deger1,deger2);
		else
		printf("hatali islem");*/
	return 0;	
}
int topla(int parametreSayisi,...){
	
	
	va_list parametre;
	va_start(parametre,parametreSayisi);
	int toplam=0;
	for(int i=0;i<parametreSayisi;i++){
		toplam+=va_arg(parametre,int);
		
	}
	printf("\ntoplam = %d\n",toplam);
	va_end(parametre);
	return toplam;
}
int cikar(int parametreSayisi,...){ // bu kısımda parametrelerin ikisinide eksili aliyor 0
	va_list Parametre;
	va_start(Parametre,parametreSayisi);
	int cikarma=0;
	for(int i=0;i<parametreSayisi;i++){
		cikarma-=va_arg(Parametre,int);
	}
	printf("cikarma =%d\n",cikarma);
	va_end(Parametre);
	return cikarma;
	
	
}
