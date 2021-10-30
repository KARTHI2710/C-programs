#include<stdio.h> 

int main()
{
   //Edit below this line
   int n;
   while(1){
   	printf("enter no");
       scanf("%d",&n);
       if(n%2!=0){
       	printf("Odd no so terminated");
           break;
       }
       printf("even no = %d\n",n);
   }

    return 0; 
}
