#include <stdio.h>
#include <stdlib.h>

/*
9. Kullan�c�n�n bir tam say�, "s" girdi�i bir C program� yaz�n. 
Program�n�z, "s"nin bir Fibonacci say�s� olup olmad���n� kontrol 
eden bir fonksiyon i�ermelidir (bir say�, her say�n�n 0 ve 1'den 
ba�layarak �nceki iki say�n�n toplam� oldu�u bir dizinin par�as�ysa 
Fibonacci say�s� oldu�u s�ylenir). Fonksiyon, "s" bir Fibonacci say�s�ysa 
true(1)veya de�ilse false(0) d�nd�rmelidir. Ana fonksiyonunuz daha sonra 
"s"nin bir Fibonacci say�s� olup olmad���n� yazmal�d�r.

0 1 1 2 3 5 8 13 21 ...

*/

int fibonacci(int s) {
	int onceki = 0, sonraki = 1;
    
    if (s == 0) return 1;  // 0 bir Fibonacci say�s�d�r.

    while (sonraki <= s) {
        if (sonraki == s) {
            return 1;
        }
        int val = onceki + sonraki;
        onceki = sonraki;
        sonraki = val;
    }
    
    return 0;
}

int main(int argc, char *argv[]) {
	
	int s;
	printf("bir tam sayi giriniz: ");
	scanf("%d", &s);
	
	int sonuc = fibonacci(s);
	
	if(sonuc==1) {
		printf("sayi fibonacci sayidir.");
	} else {
		printf("sayi fibonacci sayisi degildir.");
	}
	
	
	
	
	return 0;
}
