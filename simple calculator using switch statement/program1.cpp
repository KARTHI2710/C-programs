#include<stdio.h> 

int main()
{
  int a,b,c;
  printf("enter a and b value");
  scanf("%d%d",&a,&b);
  printf("enter your choice \n 1.add \n 2.sub \n 3.mul \n 4.div \n");
  scanf("%d",&c);
  switch(c)
  {
      case 1:
      printf("%d",a+b);
      break;
      case 2:
      printf("%d",a-b);
      break;
      case 3:
      printf("%d",a*b);
      break;
      case 4:
      printf("%d",a/b);
      break;
      default :
      printf("Invalid");
      break;
  }

    return 0; 
}
