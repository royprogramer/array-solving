#include<stdio.h>
int main()
{
    int i,num,arr[20],sum=0;
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {

         sum+=arr[i];
        }


    }
    printf("%d",sum);

    return 0;
}

