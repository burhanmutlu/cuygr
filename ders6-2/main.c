#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int secim;
	while(1) {
		printf("\n1.kelime ekle\n2.kelime ara\n3.kelime listele\n4.cikis\nseciminiz:");
		scanf("%d",&secim);
		
		switch(secim) {
			case 1:
				kelimeEkle();
				break;
			case 2:
				kelimeAra();
				break;
			case 3:
				kelimeListele();
				break;
			case 4:
				return 0;
			default:
				printf("gecersiz secim\n");
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
