#include <stdio.h>
#include <stdlib.h>

float yasHesapla(int dogumTarihi, int ay, int gun) {
	// 15 12 2001
	float yas = 0;
	int suankiYil = 2025;
	int suankiAy = 4;
	int suankiGun = 17;
	
	yas = (suankiYil - dogumTarihi) + (suankiAy - ay)/12.0 +(suankiGun - gun)/365.0;
	return yas;
}

void degerDegistir(int *p) {
	*p= 10;
	return *p;
}


int main(int argc, char *argv[]) {
	
//	int dogumYili, ay, gun; 
//	printf("dogum yilinizi giriniz");
//	scanf("%d",&dogumYili);
//	
//	printf("dogum ayinizi giriniz");
//	scanf("%d",&ay);
//	
//	printf("dogum gununuzu giriniz");
//	scanf("%d",&gun);
//	
//	float yas = yasHesapla(dogumYili, ay, gun);
//	
//	printf("yasiniz: %f", yas);

	// döngüler
	
	int i;
	
	/*for(i=0; i<4; ++i){
		printf("%d", i);
	}*/
	
//	int a = 5;
//	while(a>0){
//		printf("%d", a);
//	}
/*	i = 0;
	do {
		printf("calisti");
	}while(++i<4);
	
	i=0;
	while(++i<4) {
		printf("\n %d", i);
	}
	
	
	// koþul ifadeleri
	
	if(i<5) {
		printf("i < 5");
	}else if(i>5) {
		printf("i > 5");
	} else {
		printf("i = 5");
	}
	
	int durum=1;
	switch(durum) {
		case 1:
			printf("ilk durum");
			break;
		case 2: 
			printf("ikinci durum");
			break;
		default: 
			printf("hicbir durum");
	}
	i=0;
	while(i++<200) {
		if(i%2==0){
			continue;
		}
		
		printf("%d",i);
		
		if(i == 9) {
			break;
		}
		
	}*/
	
	/*int *p;
	
	int sayi = 5;
	
	printf("%p\n", &p);
	
	p = &sayi;
	
	*p = 4; // *p == sayi*/
	
	// p -> p nin gösterdiði adres
	// &p p nin kendi adresi
	// *p p nin gösterdiði adresteki deger
	
/*	printf("%p",p);
	
	printf("pointerin gosterdigi adresteki deger: %d", *p);
	printf("\n %d", sayi);
	
	degerDegistir(p);
	
	printf("fonksiyondan sonraki deger: %d", *p);
	*/
	
	
	
	
	
	
	int yas = 10;
	
	int *p;
	
	p = &yas;
	
	yas = 23;
	
	*p = 12; // yas = 12
	
	printf("%d", yas);
	
	int **pp;
	
	pp = p;
	
	*pp = 13;
	
	// yas = 13
	
	printf("%d", yas);

	
	return 0;
}
