#include<stdio.h>
int main()
{
    long int i,m,n,res=0xffffffff;
    printf("Enter the start value and end value\t");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        res=res&i;
    }
    printf("Result is %d",res);
    return 0;
}
