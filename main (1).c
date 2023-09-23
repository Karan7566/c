#include<stdio.h>
struct student {
    int roll_no;
    float pr;
    char name[100];
};
int main()
{
   struct student s1;
   s1.roll_no=1097;
   printf("%d\n",s1.roll_no);
   s1.pr=86.55;
   printf("%0.2f\n",s1.pr);
   strcpy(s1.name,"xyz");
   printf("%s\n",s1.name);
   
   return 0;
}