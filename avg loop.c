#include<stdio.h>
int main()
{
    int end,i,sum=0;
    float avg;
     printf("Enter the end point");
    scanf("%d",&end);
    for(i=1;i<=end;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
     printf("%d\n",sum);
    avg=sum/end;
    printf("%f",avg);
    return 0;
}
