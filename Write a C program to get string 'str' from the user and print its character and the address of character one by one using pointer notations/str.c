#include<stdio.h> 

int main()
{
   //Edit below this line
   char str[20];
   int i;
   printf("enter a string\n");
     //scanf("%s",str);
	 gets(str); 
	//manipulate a string *(str+3)='k';
   for(i=0;str[i];i++){
       printf("%c ",*(str+i));
       printf("%p \n",str+i);
   }
    return 0; 
}
