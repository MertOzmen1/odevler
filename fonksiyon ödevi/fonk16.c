//kullan�c�n�n girdi�i iki say�y� toplay�p sonucu ekrana yazd�rma

#include <stdio.h>

int topla(int s1, int s2){
     return s1+s2; // ana fonksiyona s1 ve s2 de�i�kenlerinin toplam�n� g�nderiyoruz. 
}

int main(){
     int sayi1,sayi2,sonuc;

     printf("1. sayi: ");
     scanf("%d",&sayi1);

     printf("2. sayi: ");
     scanf("%d",&sayi2);

     sonuc = topla(sayi1,sayi2); // return ile gelen say� sonuc de�i�kenine atan�yor.
     printf("%d+%d=%d", sayi1, sayi2, sonuc);
}
