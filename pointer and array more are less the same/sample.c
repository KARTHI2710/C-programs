#include<stdio.h>
int main()
{
	//int arr[5]={10,20,30,40,50}
	int n,i;
	printf("enter n value \n");
	scanf("%d",&n);
	int arr[n];
	printf("the  memory is = %d \n",sizeof(arr[]));
	printf("enter a numbers \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%p\n",arr+i);
	}
	return 0;
	
}
