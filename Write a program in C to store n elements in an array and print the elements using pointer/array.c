#include<stdio.h>
int main(){
	int n,arr[10],*ptr,i;
	ptr=arr;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++){
		printf("arr[%d] = %d\n",i,*(ptr+i));
	}
	
	
}
