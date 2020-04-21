#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0,max=0;
    int *nums;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    nums=(int *)malloc(sizeof(int)*n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+nums[i];

        if(sum<0)
        {
            sum=0;
        }
        else if(max<sum)
        {
            max=sum;
        }
    }
    printf("The largest sum is %d",max);
}
