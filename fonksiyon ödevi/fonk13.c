//bir sayıdan 1e kadar sayıları yazdırma

#include<stdio.h>

int sayiYazdir(int sayi){
	if(sayi==0){
		return 0;	
	}
	printf("%d\n",sayi);
	sayiYazdir(sayi-1);
}

int main(){
	sayiYazdir(10);
	
	return 0;
}
