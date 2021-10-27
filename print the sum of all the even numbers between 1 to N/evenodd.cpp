#include <stdio.h>
int main()
{
   //Edit below this line
   int n,i,sum=0;
   printf("enter n value \n");
   scanf("%d",&n);
   for(i=0;i<=n;i+=2){
       sum=sum+i;
   }
   printf("sum = %d",sum);

    return 0; 
}
