#include<stdio.h> 

int main()
{
   //Edit below this line
   int n,n1,sum=0,sum1=0,count=0;
   printf("enter n value");
   scanf("%d",&n);
   while(n>0){
       n1=n%10;
       n=n/10;
       count=count+1;
       if(count%2==0){
           sum=sum+n1;
       }
       else{
           sum1=sum1+n1;
       }
   }
   printf("Odd Position Sum = %d\n",sum1);
   printf("Even Position Sum = %d",sum);

    return 0; 
}
