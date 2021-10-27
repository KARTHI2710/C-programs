#include<stdio.h> 

int main()
{
   //Edit below this line
   int n,n1,sum=0;
   printf("enter n value");
   scanf("%d",&n);
   while(n>0){
       n1=n%10;
       n=n/10;
       sum=sum+n1;
   }
   printf("sum = %d",sum);

    return 0; 
}
