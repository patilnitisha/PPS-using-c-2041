#include<stdio.h>
int main()
{
	int n , i , array[i];
	printf("Enter the number of element for the array:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the %d integer element: \n",n);
	for(i=0;i<n;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d", &array[i]);
	}
	printf("\n");
	return 0;
}
