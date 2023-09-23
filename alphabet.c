#include<stdio.h>
int main ()
{
    char value;
    printf("enter the value");
    scanf("%c",&value);
    if ((value>='A'&& value<='Z') ||( value>='a' && value<='z'))
    {
        printf("alpha");
    }
    else{
        printf("digit");
    }
    
    return 0;
}