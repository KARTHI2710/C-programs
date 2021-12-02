#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,n,i,j,temp;
	printf("enter a number (1 to 100): \n");
	scanf("%d",&n);
	ptr=malloc(n*sizeof(int));
	printf("enter elements");
	for(i=1;i<=n;i++){
		scanf("%d",(ptr+i));
	}
	for(i=1;i<=n-1;i++){
		for(j=i;j<n;j++){
			if(*(ptr+i)>*(ptr+j)){
			
			temp=*(ptr+i);
			(ptr+i)=*(ptr+j);
			(ptr+j)=&temp;
		}
		}
	}
	printf("the largest element is : %d",*(ptr+1));
}
