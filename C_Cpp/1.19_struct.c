#include<stdio.h>
#include<string.h>
struct sinemaFilm{
	char ad[30];
	char yonetmen[30];
	int yil;
};
int main(){
sinemaFilm film1;
strcpy(film1.ad,"Collateral");
strcpy(film1.yonetmen,"Michael Mann");
film1.yil = 2004;
printf("film adi : %s \n",film1.ad);
printf("film onetmen : %s\n",film1.yonetmen);
printf("film yil :%d",film1.yil);
return 0;

}
