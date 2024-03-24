#include <stdio.h>


int main(){
	int a[8]={8,2,1,4,3,11,5,6};
	int i,n;
	int temp;
	int sortedIndex=0;
	int min = a[0];
	int max = a[0];
	clrscr();

	for(i=0;i<=8;i++){
		if(a[i]<min) min = a[i];

		if(a[i]>max) max = a[i];
	}

	for(n=1;n<=8;n++){
		if(n!=a[n-1]){
			for(i=sortedIndex;i<8;i++){
				if(a[i]==n){
					temp = a[i];
					a[i]=a[sortedIndex];
					a[sortedIndex]=temp;
					sortedIndex++;
					break;
					}
				}
			}
		else{
			sortedIndex++;
		    }
	}

	for(i=0;i<8;i++){
		printf("%d  ", a[i]);
	}


	getch();
	return 0;
}

