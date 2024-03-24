#include <stdio.h>

void main(){
	long i;
	clrscr();
	for(i = 10000; i <= 99999; i++){
		long n = i;
		long rev = 0;

		while(n != 0){
			rev = rev*10 + n%10;
			n = n/10;
		}
		if(4*i == rev){printf(" %ld ", i);}


	}
	getch();
}