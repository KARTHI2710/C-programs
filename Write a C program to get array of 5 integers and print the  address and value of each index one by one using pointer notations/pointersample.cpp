#include<stdio.h> 

int main()
{
   //Edit below this line
   int i,arr[5];
   printf("enter 5 numbers");
   for(i=0;i<5;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<5;i++)
   {
       printf("%p %d\n",(arr+i),*(arr+i));
   }

    return 0; 
}
