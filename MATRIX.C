#include <stdio.h>

int main()
{
	int a[5][5];
	int b[5][5];
	int c[5][5];
	int m,n,p,q;
	int i,j,choice;
	int sum;
	int x;
	clrscr();
	printf("Enter the dimensions of the matrix 1: ");
	scanf("%d %d", &m,&n);
	printf("Enter the elements of matrix 1: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf(" %d", &a[i][j]);
		}
	}
	printf("Enter the dimensions of matrix 2: ");
	scanf("%d %d", &p,&q);
	printf("Enter the elemts of matrix 2: \n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf(" %d", &b[i][j]);
		}
	}
	printf("Enter your choice(1,2,3): ");
	scanf(" %d", &choice);

	switch(choice){
		case 1:
			for(i=0;i<m;i++){
				for(j=0;j<q;j++){
					c[i][j] = a[i][j]+b[i][j];
				}
			}
			for(i=0;i<m;i++){
				for(j=0;j<q;j++){
					printf(" %d \t", c[i][j]);
				}
				printf("\n");
			}
			break;
		case 2:
			for(i=0;i<m;i++){
				for(j=0;j<q;j++){
					c[i][j] = a[i][j]-b[i][j];
				}
			}
			for(i=0;i<m;i++){
				for(j=0;j<q;j++){
					printf(" %d \t", c[i][j]);
				}
				printf("\n");
			}
			break;
		case 3: if(m==q){
			for(i=0;i<m;i++){
				for(j=0;j<q;j++){
					c[i][j]=0;
					for(x=0;x<m;x++){
						c[i][j] = c[i][j] + a[i][x]*b[x][i];
					}

			     }	}
			}
			for(i=0;i<m;i++){
				for(j=0;j<q;j++){
					printf(" %d \t", c[i][j]);
				}
				printf("\n");
			}
			break;

	}


	getch();
	return 0;
}