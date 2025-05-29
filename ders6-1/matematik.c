#include "matematik.h"
#include <stdio.h>


int topla(int a, int b) {
	printf("%d + %d =  %d",a,b,a+b);
	return a+b;
}

int cikar(int a, int b) {
	printf("%d - %d =  %d",a,b,a-b);
	return a-b;
}

void nokta_goster(struct Nokta n) {
	printf("Nokta: (%d,%d)\n",n.x,n.y);
}
