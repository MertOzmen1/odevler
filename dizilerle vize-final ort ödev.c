#include<stdio.h>
#define sayi 5

float ortbul(float adizi[sayi],float bdizi[sayi],float cdizi[sayi]){
    int k;

    for(k=0;k<sayi;k++){
        cdizi[k]=(0.4*adizi[k])+(0.6*bdizi[k]);
    }
    return cdizi[sayi];
}


int main(){
    float vize[sayi],final[sayi],ort[sayi];
    int i;

    printf("sirayla Ogrencilerin Vize Bilgilerini Giriniz:");
    for(i=0;i<sayi;i++){
   		scanf("%f",&vize[i]);
    }
    printf("\n");
    
    printf("sirayla Ogrencilerin Final Bilgilerini Giriniz:");
    for(i=0;i<sayi;i++){
    	scanf("%f",&final[i]);
    }

    ort[sayi]=ortbul(vize,final,ort);
    printf("\n\n");
    
    for(i=0;i<sayi;i++){
        printf("%d.ogrencinin Ortalamasi = %0.2f\n",(i+1),ort[i]);
    }
    
    return 0;
}
