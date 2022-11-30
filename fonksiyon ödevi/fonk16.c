//kullanýcýnýn girdiði iki sayýyý toplayýp sonucu ekrana yazdýrma

#include <stdio.h>

int topla(int s1, int s2){
     return s1+s2; // ana fonksiyona s1 ve s2 deðiþkenlerinin toplamýný gönderiyoruz. 
}

int main(){
     int sayi1,sayi2,sonuc;

     printf("1. sayi: ");
     scanf("%d",&sayi1);

     printf("2. sayi: ");
     scanf("%d",&sayi2);

     sonuc = topla(sayi1,sayi2); // return ile gelen sayý sonuc deðiþkenine atanýyor.
     printf("%d+%d=%d", sayi1, sayi2, sonuc);
}
