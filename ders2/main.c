#include <stdio.h>
#include <stdlib.h>

// call by value
void deger_degister(int sayi) {
	sayi = 5; 
}

// deger dondurerek deger degistirme
int deger_degistir2(int sayi) {
	sayi = 5;
	return sayi;
}

// call by reference
void deger_degistir3(int* sayi) {
	*sayi = 5;
}

int main(int argc, char *argv[]) {
	
/*	int a = 10; // *((int*)(0X62FE1C))
	
	int *p; // bu bir pointer -> adres iþaretcisi
	
	p = &a; // p artik a dir diyebiliriz
	
	*p= 2; // a = 2 -> p a nin adresini tutuyor. a nin adresindeki degeri degistirdik
	
	
	printf("a nin degeri %d\n",a);
	printf("a nin adresi: %p\n",&a);
	
	printf("p nin adresi: %p\n", &p);
	printf("p nin gosterdigi adres %p\n", p);
	printf("p nin gosterdigi adresin degeri: %d\n",*p);
	
	printf("%d",*((int*)(0X62FE1C))); // adres ile deger bastirabiliriz*/
	
	
	/*
	
	int dizi[] = {1,2,3,4};
	int i;
	
	printf("%d int boyutu\n", sizeof(int));
	printf("%d char boyutu\n", sizeof(char));
	printf("%d void boyutu\n", sizeof(void));

	
	for(i=0;i<4;i++) {
		printf("dizinin %d. elemaninin adresi: %p\n",i+1, &dizi[i]);
	}
	
	printf("%p dizinin 4. elemaninin adresi\n",dizi+3); // &dizi[4]
	printf("%d dizinin 2. elemanin adresindeki deger\n",*(dizi+1));
	
	
	int *p = dizi;*/
	
	/*int sayi = 7;
	deger_degister(sayi);
	//printf("%d",sayi);
	
	//sayi = deger_degistir2(sayi);
	
	deger_degistir3(&sayi);
	
	printf("%d", sayi);*/
	
	
	/*
	int *p;
	
	p = (int*)malloc(5 * sizeof(int)); // 5 tane int lik yer: 20 byte
	
	
	// void -> tipi belli olmayan 
	
	
	if(p==NULL) {
		printf("hafiza dolu");
		return 1;
	}
	
	// pointer ve dizeler kardeþtir
	int i;
	for(i=0;i<5;i++) {
		p[i] = i*3;
	}
	
	for(i=0;i<5;i++) {
		printf("%d ", p[i]);
	}
	
	printf("%d\n", *(int*)(0X60285));

	free(p); // bellekten uçuyorum
	
	
	int *x;
	x = NULL;
	if(x == NULL){
		printf("%p",x);
	}
	*/
	

	int a = 100;
	int *p = &a;
	int **pp = &p;
	
	*p = 50;
	
	**pp = 150;
	
	a = 20;
	
	printf("**pp ile erisim %d\n", **pp);
	
			
	
	
	return 0;
}
