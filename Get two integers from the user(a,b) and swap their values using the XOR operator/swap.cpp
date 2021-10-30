#include<stdio.h> 

int main()
{
   //Edit below this line
   int a,b,result;
   printf("enter two no");
   scanf("%d %d",&a,&b);
   printf("before swapping a=%d b=%d\n",a,b);
   result=a^b;
   b=result^b;
   a=result^a;
   printf("after swapping a=%d b=%d",a,b);

    return 0; 
}
