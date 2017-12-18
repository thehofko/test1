#include <stdio.h>
int main(void){
	int a=0, b=0;
	printf("Enter two numbers seperated by spaces \n");
	scanf("%d %d" &a, &b); 
	int c = a+b;
	printf("%d\n", c);
}
