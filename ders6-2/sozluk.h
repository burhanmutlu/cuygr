#ifndef SOZLUK_H
#define SOZLUK_H

#define MAX_KELIME 100
#define MAX_UZUNLUK 50

typedef struct Kelime {
	char kelime[MAX_UZUNLUK];
	char anlam[MAX_UZUNLUK];
};

struct Kelime* sozluk;

void kelimeEkle();

void kelimeAra();

void kelimeListele();



#endif
