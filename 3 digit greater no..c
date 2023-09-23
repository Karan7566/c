#include<stdio.h>
int main()
    {
    int n1,n2,n3;
    printf("enter the first value");
    scanf("%d",&n1);
      printf("enter the second value");
    scanf("%d",&n2);
      printf("enter the third value");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
    {
        printf("number 1 is greater");
    }
    else if (n2>n1 && n2>n3)
    {
        printf("number 2 is greater");
    }
    else 
    {
        printf("number 3 is greater");
    }
    
    return 0;
    }
   