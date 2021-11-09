#include<stdio.h> 

int main()
{
   //Edit below this line
   char ch[1000];
   int i;
   printf("enter a stirng");
   scanf("%s",ch);
   i=0;
   while(ch[i]!='\0'){
   i++;
   }
   printf("length =  %d",i);
    return 0;
}
