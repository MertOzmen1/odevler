//faktöriyel hesaplama

#include<stdio.h>

int faktoriyelHesapla(sayi){
	if(sayi==0 || sayi==1){
		return 1;
	}
	
	int sonuc=sayi*faktoriyelHesapla(sayi-1);
	return sonuc;//120
}

int main(){
	printf("%d",faktoriyelHesapla(5));
	
	return 0;
}

//ilk gelen 5
//sonuc=5*faktoriyelHesapla(4)
//sonuc=5*4*faktoriyelHesapla(3)
//sonuc=5*4*3*faktoriyelHesapla(2)
//sonuc=5*4*3*2faktoriyelHesapla(1)
//sonuc=5*4*3*2*1=120





