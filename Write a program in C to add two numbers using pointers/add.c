#include<stdio.h>
int main()
{
	int n1,n2,sum;
	int *p1,*p2;
	printf("enter two numbers\n");
	scanf("%d %d",&n1,&n2);
	p1=&n1;
	p2=&n2;
	sum=*p1+*p2;
	printf("sum = %d",sum);
	return 0;
	
}
