#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	
/*	int *p_sayi;
	
	p_sayi = (int*)malloc(sizeof(int));
	
	printf("%d",*p_sayi);
	
	if(p_sayi == NULL) {
		printf("hata: malloc ile bellek ayrilamadi");
		return 1;
	}
	
	*p_sayi = 123;
	
	printf("malloc ile ayrilan alandaki deger %d (Adres: %p)\n",*p_sayi, p_sayi);
	
	free(p_sayi); 
	p_sayi = NULL;

	printf("malloc ile ayrilan alandaki deger %d (Adres: %p)\n",*p_sayi, p_sayi);*/

// her elemani 0 ile baslatiyor- calloc
	int n,i;
	
	printf("kac adet sayi girmek istersiniz");
	scanf("%d", &n);
	
	int *p_dizi;
	
	p_dizi = (int*)calloc(n,sizeof(int));
	
	if(p_dizi == NULL) {
		printf("hata: calloc ile bellek ayrilamadi");
		return 1;
	}
	
	//printf("calloc ile ayrilan dizinin ilk degeri %d", p_dizi[0]);
	
	printf("lutfen %d adet tamsayi giriniz",n);
	for(i=0;i<n;i++) {
		scanf("%d", &p_dizi[i]);
	}
	
	printf("girdiginiz sayilar\n");
	for(i=0;i<n;i++) {
		//printf("%d", p_dizi[i]);
		printf("%d", *(p_dizi+i));
	}
	
	//free(p_dizi);
	//p_dizi = NULL;
	
	
	int yeni_boyut;
	printf("dizinin yeni boyutunu giriniz");
	scanf("%d",&yeni_boyut);
	
	int *p_yeni_dizi;
	p_yeni_dizi = realloc(p_dizi, yeni_boyut*sizeof(int));
	
	// if null kontrolu
	
	p_dizi = p_yeni_dizi;
	int temp=0;
	
	if(yeni_boyut>n) {
		printf("dizi buyutuldu. yeni eklenen elemanlara deger aktarin(%d. degerden itibaren)",n);
		for(i=n;i<yeni_boyut;i++) {
			scanf("%d",&(p_dizi[i]));
		}
	}
	
	printf("dizinin yeni degerleri:");
	for(i=0;i<yeni_boyut;i++) {
		printf("%d ",p_dizi[i]);
	}
	
	
	free(p_dizi);
	free(p_yeni_dizi);
	p_dizi = NULL;
	p_yeni_dizi = NULL;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
