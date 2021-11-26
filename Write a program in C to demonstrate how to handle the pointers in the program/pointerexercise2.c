#include<stdio.h>
int main()
{
	int m=29;
	int *ab=&m;
	printf("address of m : %p\n",&m);
	printf("value of m : %d \n",m);
	printf("address of pointer ab : %p\n",&ab);
	printf("address of m using point varible ab : %p\n",ab);
	printf("content of point ab : %d\n",*ab);
	m=34;
	printf("address of m using point varible ab : %p\n",ab);
	printf("content of pointer ab : %d \n",*ab);
	*ab=7;
	printf("address of m :%p \n",&m);
	printf("value of m : %d",m);
	
	
}
