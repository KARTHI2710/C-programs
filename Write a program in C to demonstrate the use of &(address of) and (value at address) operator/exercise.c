#include<stdio.h>
int main()
{
	int m=300;
	float fx=300.60006;
	char cht='z';
	int *m1=&m;
	float *fx1=&fx;
	char *cht1=&cht;
	printf("using ordinary variable");
	printf("address of m =%p\n",&m);
	printf("address of fx =%p\n",&fx);
	printf("address of cht =%p\n",&cht);
	printf("value of m %d \n",m);
	printf("value of fx %f \n",fx);
	printf("value of cht %c \n",cht);
	printf("address of m using pointer = %p\n",m1);
	printf("address of fx using pointer = %p \n",fx1);
	printf("address of cht using pointer = %p \n ",cht1);
	printf("value of m using pointer = %d\n",*m1);
	printf("value of fx using pointer = %f\n",*fx1);
	printf("value of cht using pointer = %c\n",*cht1);
	
}
