#include<stdio.h> 
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
   //Edit below this line
   int a,b;
   printf("enter two numbers");
   scanf("%d %d",&a,&b);
   printf("\nBefore swapping a= %d  b=%d",a,b);
   swap(&a,&b);
   printf("\nafter swapping a=%d  b=%d",a,b);
   
    return 0; 
}

