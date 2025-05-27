#include <stdio.h>
#include <stdlib.h>
/*
5. Kullanýcýdan "n" sayýsýný soran bir C programý yazýn. Programýnýz, sayýnýn asal olup olmadýðýný
kontrol eden bir fonksiyon çaðýrmalýdýr. Fonksiyon, sayý asal ise 1, deðilse 0 döndürmelidir. Bu fonksiyonu
çaðýrdýktan sonra, ana programýnýz, fonksiyonun sonucuna göre "Giriþ sayýsý asaldýr" veya "Giriþ sayýsý 
asal deðildir" yazdýrmalýdýr.

*/
// 2 3 5 7 11 13 17 ...
/* 7 icin
		7/6
		7/5
		7/4
		7/3
		7/2
*/
int asalMi(int n) { // asal: 1 ve kendisi dýsýnda bolunemez!
	if(n == 2) {
		return 1;
	}
	if(n<2) {
		return 0;
	}
	int i;
	for(i=n-1;i>1;i--) {
		if(n%i == 0) { // eger bolumden kalan 0 ise -> yani tam bolunuyor demektir. asal olmaz
			return 0;
		} //4.3 -> 4.0000000000000000000000000000000000000000000000001
	}
	return 1;
}



int main(int argc, char *argv[]) {
	
	int n,i,sonuc;
	//printf("n sayisini giriniz: ");
	//scanf("%d", &n);
	
	for(i=0; i<1000000000;i++) {
		sonuc = asalMi(i);
	
		if(sonuc == 1) {
			printf("%d ", i);
		} 
		/*else {
			printf("sayi asal degildir.\n");
		}*/
	}
	
	
	
	
	return 0;
}
