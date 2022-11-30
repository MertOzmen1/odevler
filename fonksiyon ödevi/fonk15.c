//yas duzeyini belirleme

#include <stdio.h>

void donem(int kullaniciYasi){
     if(kullaniciYasi >= 0 && kullaniciYasi < 16){
          printf("Cocuksun");
     }
     else if(kullaniciYasi >= 16 && kullaniciYasi < 30){
          printf("Gencsin");
     }
     else if(kullaniciYasi >= 30 && kullaniciYasi < 55){
          printf("Yetiskinsin");
     }
     else if(kullaniciYasi >= 60){
          printf("Yaslisin");
     }
     else{
          printf("Yanlis giris yaptiniz");
     }
}

int main(){
     int yas;

     printf("Kac yasindasin?\n");
     scanf("%d",&yas);
     donem(yas);
}
