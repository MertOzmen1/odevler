//fonksiyonu a�a��da tan�mlanm�� k���k harfi b�y�k harf yapma

#include<stdio.h>

char mytoupper(char); //imzas� at�ld�

int main(){
	printf("%c\n",mytoupper('a'));
	
	return 0;
}

char mytoupper(char ch){
	return ch-32;
}
