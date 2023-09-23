#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    
    printf("%p\n",p);//location threw pointer variable   refrencing
    printf("%p",&a);//location threw variable
    
    printf("\n%d",a);//value threw variable
    printf("\n%d",*p);//value threw pointer      de refrencing
    
    
    a=25;//update the value
    *p=50;//update the value
    printf("\n%d",a);
    return 0;
}