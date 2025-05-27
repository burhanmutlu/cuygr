#include <stdio.h>
#include <stdlib.h>


/*
tur fonksiyonIsmi(parametreler) {
	icerisi
}
*/

/*
us hesaplama 
2^3= 2*2*2=8
2^4=
2*1=2
2*2=4 
4*2=8
8*2=16

x^y = 

2 deger almamýz gerekiyor

taban degerini us degeri kadar birbiriyle carpiyoruz

sonuc degerini dondurmemiz gerekiyor

*/



int usHesapla(int taban, int us) {
	int sonuc=1,i=0;
	/*for(i=0; i<us; i++) {
		sonuc = sonuc * taban;  
	}*/
	
	while(i<us) {
		sonuc = sonuc * taban;  
		i++;
	}
	
	return sonuc;
}


int main(int argc, char *argv[]) {
	
	// printf("Hello World!");
	/*
	coklu
		yorum
			satiri
	*/
	
	/*int tamSayi = 10; // tam sayi 
	float kesirliSayi = 5.5; // kesirli
	char karakter = 'A'; // karakter
	
	printf("%dSayi: %d\n", tamSayi, 5);
	printf("kesirli sayi: %.1f\n", kesirliSayi); // %.xf -> noktadan sonra x karakteri bas
	printf("karakterimiz: %c\n", karakter);*/
	
	/*int yas;
	
	printf("Merhaba, yasinizi giriniz: ");
	scanf("%d", &yas);
	
	printf("Girdiginiz yas degeri : %d \n", yas);*/
	
	/*int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi > 0) {
		printf("pozitif sayidir.%d", sayi);
	} else if(sayi < 0) {
		printf("negatif sayidir");
	} else { 
		printf("sayi 0dir");
	}*/
	
	/*printf("1");
	printf("2");
	printf("3");*/
	
	/*int i=0;
	
	while(i<5) {
		//++i;
		printf("dongu %d kez calisti \n", i);
		//i = i + 1; 
		i++;
		
	}*/
	
	/*int i;
	
	for(i = 0; i<5; i++) {
		printf("deneme");
		printf("dongu %d kez calisti \n", i++);
	}*/
	
	
	/*int i=1;
	
	do {
		// en az 1 kez calisiyor.
		printf("dongu calisti");
		i++; // 1 2 3 4
	}while(i<5);
	*/
	
/*	int t,u;
	
	printf("us hesaplamak istediginiz taban ve us degerlerini arada bosluk olarak giriniz.");
	
	scanf("%d %d",&t,&u);
	
	int usDegeri = usHesapla(t,u);

	printf("%d^%d degeri: %d",t,u,usDegeri);*/
	
	
	/*
	dik ucgen 
	*
	**
	***
	****
	*****
	....
	20 satýr
	*/
	
	/*printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");*/
	
	/*int i,j;
	
	for(i=0;i<20;i++) {
		for(j=0; j<=i; j++) {
			printf("*");
		} // satir islemi tamamlandiktan sonra asagi in
		printf("\n"); // alt satira gecti
	}*/
	
	/*int asalSayilar[] = {2,3,5,7,11,13};
	
	char karakterDizisi[] = {'A','B','C'};
	
	
	int i;
	
	for(i=0; i<6; i++) {
		printf("dizinin %d. degeri: %d\n",i+1, asalSayilar[i]);
	}
	
	for(i=0; i<3; i++) {
		printf("dizinin %d. degeri: %c\n",i+1, karakterDizisi[i]);
	}*/
	
	//int i;
	
	/*for(i=0; i<10;i++) {
		if(i==5) {
			printf("sayi 5, dongu sonlandiriliyor.");
			break;
		}
		printf("%d\n",i);
	}*/
	
	/*for(i=0; i<10;i++) {
		if(i%2==0) { // cift sayi ise
			continue; // direkt dongu basina geciyor.
		}
		printf("%d\n",i);
	}*/
	
	/*int dizi[5];
	int i;

	srand(time(NULL)); 
	
	printf("5 adet deger giriniz: ");
	for(i=0; i<5; i++) {
		//scanf("%d",&dizi[i]);
		dizi[i]= 50+rand()%51; // 50-100 arasýnda deger geliyor
	}
	
	printf("girilen sayilar:");
	for(i=0; i<5; i++) {
		printf("%d\n",dizi[i]);
	}*/
	
	
	
	int gun;
	printf("1-7 arasinda bir gun numarasi girin: ");
	scanf("%d",&gun);
	
	switch(gun) {
		case 1: printf("Pazartesi\n"); break;
		case 2: printf("Sali\n"); break;
		case 3: printf("crs\n"); break;
		case 4: printf("persembe\n"); break;
		case 5: printf("cuma\n"); break;
		case 6: printf("cmt\n"); break;
		case 7: printf("pazar\n"); break;
		default:printf("gecersiz");
	}
	
	
	
	
	
	
	return 0;
}
