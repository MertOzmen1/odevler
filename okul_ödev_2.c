#include<stdio.h>

//ödev2

//soru1
//dik üçgen
int main(){
	int miktar=1;
	int a=0, b=0;
	
	for(a=0;a<7;a++){
		for(b=0;b<miktar;b++)
		{
			printf("*");
		}
		printf("\n");
		miktar++;
	}
	printf("\n\n");
	
	
//soru2	
//üçgen piramit	
    int c, bosluk, satir, x=0;
    printf("satir sayisini giriniz: ");
    scanf("%d", &satir);
    for (c=1; c<=satir; ++c,x=0) {
        for (bosluk=1; bosluk<=satir-c; ++bosluk)
        { printf("  "); }
        while (x!=2*c-1) {
            printf("* ");
            ++x;
        }
        printf("\n");
    }    
    
	return 0;
}
