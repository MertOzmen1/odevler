//kullanıcının girdiği iki sayıyı çarpıp sonucu ekrana yazdırma

#include <stdio.h>

int carp(int s1, int s2){
     return s1*s2; // ana fonksiyona s1 ve s2 değişkenlerinin toplamını gönderiyoruz. 
}

int main(){
     int sayi1,sayi2,sonuc;

     printf("1. sayi : ");
     scanf("%d",&sayi1);

     printf("2. sayi : ");
     scanf("%d",&sayi2);

     sonuc=carp(sayi1,sayi2);
     printf("%d*%d=%d",sayi1,sayi2,sonuc);
}
