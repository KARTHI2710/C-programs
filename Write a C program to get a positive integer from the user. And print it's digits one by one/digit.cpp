#include<stdio.h> 

int main()
{
   //Edit below this line
   int n,n1;
   printf("enter n value");
   scanf("%d",&n);
   while(n>0){
       n1=n%10;
       n=n/10;
       printf("%d\n",n1);
   }

    return 0; 
}
