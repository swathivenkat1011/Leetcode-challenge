#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr;
    char str[20][5];
    int i,j,k,n,count=0,x;
    printf("enter the number of strings\t");
    scanf("%d",&n);
    printf("Enter the strings\n");
    for(i=0;i<n;i++)
    {
    scanf("%s",str[i]);
    }
    printf("[\n");
    for(i=0;i<n;i++)
    {
        printf("[%s",str[i]);
        for(k=i+1;k<n;k++)
        {
        if(strlen(str[i])==strlen(str[k]))
        {
            for(j=0;j<strlen(str[i]);j++)
          {
            ptr=strchr(str[k],str[i][j]);
            if(ptr)
            {
                count++;
            }
          }
        if(count==strlen(str[i]))
        {
            printf(",%s",str[k]);

            for(x=k;x<n-1;x++)
            {
                strcpy(str[x],str[x+1]);
            }
            n=n-1;
        }
        }
        count=0;
        }
        printf("]\n");
    }
    printf("]");
    return 0;
}
