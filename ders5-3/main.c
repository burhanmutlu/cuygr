#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
	char ad[30];
	char soyad[50];
	long long ogrenci_no;
	float not_ortalamasi;	
};


int main(int argc, char *argv[]) {
	
	struct Ogrenci ogrenci1;
	// int sayi1; -> turu sayi
	// Ogrenci -> turu Ogrencidir
	// float a -> turu kesirlidir
	// +++ degiskin tipi -> Ogrenci
	
	strcpy(ogrenci1.ad,"uygar");
	strcpy(ogrenci1.soyad, "guleryuz");
	ogrenci1.ogrenci_no = 2220357071;
	ogrenci1.not_ortalamasi = 2.6;
	/*
		ogrenci1.ad[0]='u'; 
		ogrenci1.ad[1]='y'; 
		ogrenci1.ad[2]='g'; 
		ogrenci1.ad[3]='a'; 
		ogrenci1.ad[4]='r'; 
		ogrenci1.ad[5]='\0';
	
	*/
	
	
	printf("ogrenci 1 bilgileri\n");
	printf("ad: %s\n",ogrenci1.ad);
	printf("soyad: %s\n",ogrenci1.soyad);
	printf("ogrenci no: %lld\n",ogrenci1.ogrenci_no);
	printf("not ortalamasi: %.1f\n",ogrenci1.not_ortalamasi);
	
	
	struct Ogrenci ogrenci2;
	
	ogrenci2 = ogrenci1; // int a; int b; b=a;
	ogrenci2.ogrenci_no = 54646545565;
	ogrenci2.not_ortalamasi = 2.5;
	
	
	printf("----------------------------\n");
	
	
	printf("ogrenci 2 bilgileri\n");
	printf("ad: %s\n",ogrenci2.ad);
	printf("soyad: %s\n",ogrenci2.soyad);
	printf("ogrenci no: %lld\n",ogrenci2.ogrenci_no);
	printf("not ortalamasi: %.1f\n",ogrenci2.not_ortalamasi);
	
	
	struct Ogrenci *ogr_ptr;
	ogr_ptr = &ogrenci1;
	printf("isaretci ile ad %s",ogr_ptr->ad);
	// pointer varsa ogrenci1->ad kullanilir 
	// yoksa ogrenci1.ad kullanýlýr
	
	
	
	
	
	
	return 0;
}
