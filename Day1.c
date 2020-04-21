#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,num,*arr,t;
    printf("Enter the size of the array");
    scanf("%d",&num);
    arr=(int *)malloc(sizeof(int)*num);
    printf("Enter the elements\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
    for(j=i+1;j<num;j++)
    {
        if(arr[i]>arr[j])
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    }
    for(i=0;i<num;i+=2)
    {
        if(arr[i]!=arr[i+1])
        {
            printf("The no is %d",arr[i]);
            break;
        }
    }
}
