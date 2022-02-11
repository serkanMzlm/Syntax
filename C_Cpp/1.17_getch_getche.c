#include<stdio.h>
#include<conio.h> // getch ve getche kütüphanesi 
int main (){
	char ch,ch1;
	ch = getch(); // enter basması beklenmez 
	printf("\nentered character : %c\n",ch);
	ch1=getche(); // getch den ferkı ekranda gösterir 
	return 0;	
	
}
