#include<stdio.h>
int main()
{
	int m=10,n,o;
	int *z;
	z=&m;
	printf("address of m using pointer variable = %p\n",z);
	printf("value of m = %d\n",*z);
	printf("address of m =%p\n",&m);
	printf("address of n= %p \n",&n);
	printf("address of z =%p\n",&z);
}
