#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,product=1;
    int *input,*output;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    input=(int *)malloc(sizeof(int)*n);
    output=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                product=product*input[j];
            }
        }
        output[i]=product;
        product=1;
    }
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d ",output[i]);
    }
    printf("]");
}
