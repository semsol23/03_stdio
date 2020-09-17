#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float a, b, c;
	
	printf("enter son : ");
	scanf("%f", &a);
	
	printf("enter mother : ");
	scanf("%f", &b);
	
	c = a/b;
	
	printf("the division result is %f", c);
	 
	return 0;
}
