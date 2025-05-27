#include <stdio.h>
#include <stdlib.h>

/*
9. Kullanýcýnýn bir tam sayý, "s" girdiði bir C programý yazýn. 
Programýnýz, "s"nin bir Fibonacci sayýsý olup olmadýðýný kontrol 
eden bir fonksiyon içermelidir (bir sayý, her sayýnýn 0 ve 1'den 
baþlayarak önceki iki sayýnýn toplamý olduðu bir dizinin parçasýysa 
Fibonacci sayýsý olduðu söylenir). Fonksiyon, "s" bir Fibonacci sayýsýysa 
true(1)veya deðilse false(0) döndürmelidir. Ana fonksiyonunuz daha sonra 
"s"nin bir Fibonacci sayýsý olup olmadýðýný yazmalýdýr.

0 1 1 2 3 5 8 13 21 ...

*/

int fibonacci(int s) {
	int onceki = 0, sonraki = 1;
    
    if (s == 0) return 1;  // 0 bir Fibonacci sayýsýdýr.

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
