#include <stdio.h>
#include <stdlib.h>
/*
5. Kullan�c�dan "n" say�s�n� soran bir C program� yaz�n. Program�n�z, say�n�n asal olup olmad���n�
kontrol eden bir fonksiyon �a��rmal�d�r. Fonksiyon, say� asal ise 1, de�ilse 0 d�nd�rmelidir. Bu fonksiyonu
�a��rd�ktan sonra, ana program�n�z, fonksiyonun sonucuna g�re "Giri� say�s� asald�r" veya "Giri� say�s� 
asal de�ildir" yazd�rmal�d�r.

*/
// 2 3 5 7 11 13 17 ...
/* 7 icin
		7/6
		7/5
		7/4
		7/3
		7/2
*/
int asalMi(int n) { // asal: 1 ve kendisi d�s�nda bolunemez!
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
