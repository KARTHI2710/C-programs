#include<stdio.h>
int main()
{
   //Edit below this line
   struct student{
       char name[10];
       int age;
       int rollno;
       int dob;
   };
   struct student s;
   printf("size of the structure is %d\n",sizeof(struct student));
   printf("enter name \n");
   scanf("%s",s.name);
   printf("enter age \n");
   scanf("%d",&s.age);
   printf("enter rollno \n");
   scanf("%d",&s.rollno);
   printf("enter date of birth like this ddmmyyyy\n");
   scanf("%d",&s.dob);
   struct student *ptr;
   ptr=&s;
   printf("name = %s\n",ptr->name);
   printf("age = %d\n",ptr->age);
   printf("rollno = %d\n",ptr->rollno);
   printf("dob = %d\n",ptr->dob);

    return 0; 
}
