#include <stdio.h>
#include <conio.h>

int insert(int a[],int *size, int b, int l){
	int i;
	if (l <* size){
		for(i = *size - 1 ; i>= l ; i--){
		a[i+1] = a[i];
		}
		a[l]=b;

		return 1;
	}
	else
	{
		return 0;
	}
}


int search(int a[], int *size, int num){
	int i;
	int x;
	for(i=0;i<*size;i++){
		if(a[i]==num){
			printf("The number is present at %d index. \n",i);
			x = i;
			break;
		}
		else
		{
			x= -1;
		}
	}
	return x;
}


int delete_element(int a[],int *size,int num){

	int i;
	int j=0;
	int z;
	z = search(a,size,num);
	i = z;
	if(z==-1)
	{
		printf("The number does not exist.\n\n");
		return 0;
	}
	else
	{
		for(j=j+i;j<*size;j++)
		{
			a[j]=a[j+1];
		}
		return 1;
	}
}

void sort(int a[], int *size){
	int i;
	int n;
	int temp;
	int counter = 0;
	int min = a[0];
	int max = a[0];

	for(i=0;i<*size;i++){
		if(min>a[i]) min = a[i];
		if(max<a[i]) max = a[i];
	}

	for(n=min;n<=max;n++){
		for(i=0;i<*size;i++){
			if(a[i]==n){
				temp = a[i];
				a[i] = a[counter];
				a[counter] = temp;
				counter++;
			}
		}
	}
	printf("The sorted Array is: ");
	for(i=0;i<*size;i++){
		printf("%d ",a[i]);
	}

}

int main()
{
	int a[100];
	int i;
	int size;
	int choice=1;
	int insnum;
	int location;
	int num;
	int ans = 0;

	clrscr();
	printf("Enter the length of Array: ");
	scanf(" %d", &size);
	for(i=0;i<size;i++){
		printf("Enter the %dth element: ", i);
		scanf(" %d", &a[i]);
	}
	printf("The Array is saved as: \n");
	printf("[ ");
	for(i=0;i<size;i++){
		printf("%d ", a[i]);
	}
	printf("]\n");

	while(choice!=5)
	{
	printf("1.Insert 2.search 3.delelte 4. sort the array 5.exit \n\n");
	printf("Enter your choice (1,2,3,4,5): ");
	scanf("%d", &choice);
	printf("\n");

	switch(choice){
		case 1:
			printf("What number do you want to insert?: ");
			scanf(" %d", &insnum);

			printf("At which index position should it be inserted?: ");
			scanf(" %d", &location);

			ans = insert(a,&size,insnum,location);
			if (ans == 1)
			{
				size++;
				printf("Here is your Array after inserting the new number: \n\n");
				for (i = 0 ; i < size ; i++)
				{
					printf("%d", a[i]);
				}
			}
			else
			{
				printf("Please enter a valid position inside the array.\n\n");
			}
			break;
		case 2:
			printf("Enter the number you wish to search for: ");
			scanf("%d", &num);

			search(a,&size,num);
			break;
		case 3:
			printf("Enter the number you wish to delete: ");
			scanf("%d", &num);

			ans = delete_element(a,&size,num);

			if ( ans == 1 )
			{
				size--;
				printf("Here is your array after deleting that number: \n");
				printf("[ ");
				for (i = 0 ; i < size ; i++)
				{
					printf("%d ", a[i]);
				}
				printf("]\n\n");
			}
			break;
		case 4:
			sort(a,&size);
			break;
		case 5:
			break;
		default:
			printf("Invalid.");
			break;

		}

	}
	printf("Bye!");

	getch();
	return 0;
}
