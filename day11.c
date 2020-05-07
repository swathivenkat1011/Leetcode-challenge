#include<stdio.h>
#define size 100
int main()
{
    int n,i,j,k,l,x,swapped,temp,count=0;
    int a[100];
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    l=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
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
	if(count==n-1||count==n)
	{
		(a[0]!=9999)?printf("%d",a[0]):printf("0");		
		break;	
	}
	
        if(a[(l-1)-count]==a[l-count])
        {
	   a[l-count]=9999;
	   a[(l-1)-count]=9999;
           count+=2;        
        }
        else
        {
	    a[l-count]-=a[(l-1)-count];
            a[(l-1)-count]=9999;
            count++;
        }
    }
}
