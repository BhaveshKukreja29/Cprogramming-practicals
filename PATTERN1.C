#include <stdio.h>

void main(){
	long n = 5;
	long digit = 0;
	long sum = 0;
	clrscr();
	while(n != 0){
		digit = n%10;
		sum = sum*10 + digit;
		n--;
		printf(" %ld \n", sum);
	}
	getch();
}