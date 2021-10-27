//Write C program to get a positive number from the user N (N > 0). And print the numbers from 1 to N (including N).
#include<stdio.h> 

int main()
{
   //Edit below this line
   int i=1,n;
   printf("enter n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       printf("%d",i);
   }

    return 0; 
}
