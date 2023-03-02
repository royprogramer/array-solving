#include<stdio.h>
int main()
{
    int i,num,arr[20];
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
         scanf("%d",&arr[i]);
    }
     for (i=num-1;i>=0;i--)
    {
         printf("%d",arr[i]);
    }

    return 0;
}
