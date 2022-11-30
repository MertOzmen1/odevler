//not hesaplama

#include<stdio.h>
 
void nothesapla(float vize, float final)
{
    float puan=(vize * 0.4)+(final * 0.6);
    printf("Notunuz=%.2f\n",puan);
    
    if(puan>60){
        printf("Dersi gectiniz.");
    }
    else if (puan>50){
        printf("Dersi sorumlu gectiniz.");
    }
    else{
        printf("Dersten kaldiniz.");
    }
}
int main()
{
    nothesapla(60,75);
}
