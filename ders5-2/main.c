#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int n) {
	if(n==0 || n==1) return 1;
	else return n * faktoriyel(n-1);
	// 5*f(4)*f(3)*f(2)*f(1)
}

int fibonacci(int n) {
	if(n<=0) {
		return 0;
	} else if(n == 1) {
		return 1;
	} else {
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
// f(5)+f(4)
//f(5)->f4 + f3



int main(int argc, char *argv[]) {
	
	/*int sayi;
	printf("faktoriyelini istedigini sayiyi giriniz");
	scanf("%d",&sayi);
	
	if(sayi<0) {
		printf("negatif sayi girdiniz");
	} else {
		printf("%d! = %d",sayi, faktoriyel(sayi));
	}
	*/
	// 1 1 2 3 5 8
	printf("%d",fibonacci(6));
	
	
	
	
	
	return 0;
}
