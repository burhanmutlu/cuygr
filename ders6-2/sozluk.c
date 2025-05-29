#include "sozluk.h"
#include <stdio.h>
#include <string.h>

int kelimeSayisi = 0;

sozluk = (Kelime*)malloc(MAX_KELIME * sizeof(struct Kelime));


void kelimeEkle(){
	if(kelimeSayisi > MAX_KELIME) {
		struct Kelime *p_yeni_dizi;
		printf("max kelime sayisina ulasildi.");
		//dinamik bellek kullanilabilir.
		p_yeni_dizi = realloc(sozluk, (kelimeSayisi+20)*sizeof(struct Kelime));
		sozluk = p_yeni_dizi;
		//return;
	}
	
	struct Kelime yeniKelime;
	printf("Kelime: ");
	scanf("%s",yeniKelime.kelime);
	printf("Anlami: ");
	scanf("%s",yeniKelime.anlam);
	
	sozluk[kelimeSayisi++] = yeniKelime;
	printf("kelime eklendi.\n");
	
}

void kelimeAra() {
	char arananKelime[MAX_UZUNLUK];
	printf("Aranacak kelime: ");
	scanf("%s", &arananKelime);
	int i;
	
	for(i=0;i<kelimeSayisi; i++) {
		if(strcmp(arananKelime, sozluk[i].kelime) == 0) {
			printf("Anlami %s\n", sozluk[i].anlam);
			return;
		}
	}
	printf("kelime bulunamadi.");
	
}

void kelimeListele() {
	if(kelimeSayisi == 0) {
		printf("sozlukte kelime yok\n");
		return;
	}
	printf("-------------------------");
	int i;
	for(i=0;i<kelimeSayisi;i++) {
		printf("%s: %s\n",sozluk[i].kelime, sozluk[i].anlam);
	}
	
}

