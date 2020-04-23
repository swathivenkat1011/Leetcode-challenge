#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,target,flag=0;
    int *arr;
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int));
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element\t");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}
