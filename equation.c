#include<stdio.h>
int main()
{
    float x1,x2,y1,y2,f;
    printf("enter the value for x1");
    scanf("%f",&x1);
    printf("enter the value for x2");
    scanf("%f",&x2);
    printf("enter the value for y1");
    scanf("%f",&y1);
    printf("enter the value for y2");
    scanf("%f",&y2);
    f=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
     printf("%f",f);
    
    
    return 0;
}