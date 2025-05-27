#include <stdio.h>
#include <stdlib.h>

#define SIFRE 1234

void menuGoster() {
	printf("---ATM MENUSU---\n");
	printf("1- Bakiye Goruntule\n");
	printf("2- Para Cek\n");
	printf("3- Para Yatir\n");
	printf("4- Cikis\n");
}

void bakiyeGoster(float bakiye) {
	printf("Mevcut Bakiyeniz: %.2f TL\n", bakiye);
}

float paraCek(float bakiye) {
	
	float miktar;
	printf("Cekmek istediginiz tutari giriniz: ");
	scanf("%f", &miktar);
	
	if(miktar > bakiye) {
		printf("Yetersiz bakiye! Para cekme islemi basarisiz.\n");
	} else {
		bakiye = bakiye - miktar;
		printf("Islem basarili! Yeni bakiyeniz: %.2f TL\n", bakiye);
	}
	
	return bakiye;
}

float paraYatir(float bakiye) {
	
	float miktar;
	printf("Yatirmak istediginiz tutari giriniz: ");
	scanf("%f", &miktar);
	
	if(miktar <= 0) {
		printf("Gecersiz miktar! Para yatirma islemi basarisiz.\n");
	} else {
		bakiye += miktar; // bakiye = bakiye + miktar;
		printf("Islem basarili! Yeni bakiyeniz %.2f TL \n", bakiye);
	}
	
	return bakiye;
}

// bagýmsýz ornek
int randDeger(int min, int max) {
	// 50 70 -> 70 - 50 
	int randValue = rand();
	return min + rand()%(max-min +1);
}


int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	//printf("Random uretilen deger: %d\n",randDeger(5,7));

	int girisHakki = 3;
	int sifre;
	float bakiye = 1500.50;
	
	while(girisHakki > 0) {
		printf("Lutfen sifrenizi giriniz: ");
		scanf("%d", &sifre);
		
		if (sifre == SIFRE) {
			printf("Giris Basarili!\n");
			break;
		} else {
			girisHakki--;
			printf("Hatali Sifre! Kalan deneme hakkiniz %d\n",girisHakki);
		}
	}
	
	if(girisHakki == 0) {
		printf("Hesabiniz bloke oldu. Lutfen banka ile iletisime geciniz.\n");
		return 0;
	}
	
	int islem;
	
	do {
		menuGoster();
		printf("Seciminizi yapiniz: ");
		scanf("%d", &islem);
		
		switch(islem) {
			case 1: 
				bakiyeGoster(bakiye);
				break;
			case 2: 
				bakiye = paraCek(bakiye);
				break;
			case 3: 
				bakiye = paraYatir(bakiye);
				break;
			case 4: 
				printf("Cikis Yapiliyor...\n");
				return 0;
			default:
				printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
		}
	} while(1);
		
	
	return 0;
}
