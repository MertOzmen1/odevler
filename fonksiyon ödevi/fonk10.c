//fonkiyonu a�a��da tan�mlanm�� �arpma

#include<stdio.h>

int carpma(int,int);//imzas� at�ld�

int main(){
	int sonuc=carpma(3,4);
	printf("%d\n",sonuc);
	
	return 0;
}

int carpma(int sayi1, int sayi2){
	return sayi1*sayi2;
}
