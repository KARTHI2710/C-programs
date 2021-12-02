#include<stdio.h> 
#include<string.h>
int main()
{
   //Edit below this line
   char str[10];
   int i,len;
   scanf("%s",str);
   len=strlen(str);
   for(i=len;str[i];i--){
       printf("%s\n",str+i);
   }

    return 0; 
}
