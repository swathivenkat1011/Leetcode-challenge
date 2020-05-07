#include<stdio.h>
#define size 100
int main()
{
    int n,i,j,k,l,x,swapped,temp;
    int a[100];
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    l=n;
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        if(n==0)
        {
            break;
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        if(a[n-1]==a[n-2])
        {
            n=n-2;
        }
        else
        {
            a[n-2]=(a[n-1]-a[n-2]);
            n=n-1;
        }
    }
    printf("n=%d",n);
    (n==0)?printf("%d",a[n]):printf("0");
     return 0;
}
