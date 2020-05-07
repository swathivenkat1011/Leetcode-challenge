#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,count=0,temp,swapped=1,times=0,data,t=0;
    int *arr;
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;(i>=0)&&(swapped);i--)
    {
        swapped=0;
        for(j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if((arr[i]+1)==(arr[i+1]))
        {
            count++;
        }
        else if(arr[i]==arr[i+1])
        {
            data=arr[i];
            for(j=i;j<n;j++)
            {
               if(arr[j]==data)
                {
                    times++;
                }
                else
                {
                    break;
                }
            }
            for(j=i+times;j<n;j++)
            {
                t++;
                if(arr[j]==(data+1))
                {
                    count++;
                }
                else
                {
                    break;
                }
            }

            i=i+times+t-1;
            times=0;
            t=0;
        }

    }
    printf("\n%d",count);

}
