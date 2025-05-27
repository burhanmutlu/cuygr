#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	FILE *dosya_yaz;
	FILE *dosya_oku;
	
	char metin_yaz[] = "selam uygar bu metin \t txt dosyasina \n yazilacak.";
	char okunan_satir[10];
	char dosya_adi[] = "metindosyasi.html";
	
	dosya_yaz = fopen(dosya_adi,"w");
	if(dosya_yaz == NULL) {
		perror("HATA: Dosya acilamadi");
		return 1;
	}
	
	fprintf(dosya_yaz,"merhaba dunya");
	fprintf(dosya_yaz, "suan %d yasindayim.",22);
	fputs(metin_yaz,dosya_yaz);
	fputc('X', dosya_yaz);
	
	fclose(dosya_yaz);
	
	
	
	dosya_oku = fopen(dosya_adi, "r");
	
	if(dosya_oku == NULL) {
		perror("dosya acilamadi");
		return 1;
	} 
	
	while(fgets(okunan_satir, sizeof(okunan_satir), dosya_oku) != NULL) {
		printf("%s", okunan_satir);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
