#include<stdio.h>
int main(){
	int a,b,*p1,*p2;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	if(*p1>*p2){
		printf("%d is maximum numer",*p1);
	}
	else{
		printf("%d is maximum number",*p2);
	}
}
