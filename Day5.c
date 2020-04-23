#include<stdio.h>
#include<string.h>
int a[20];
int stack[20];
int top=-1;
int x=-1;
void push(int);
void pop();
void getmin();
int main()
{
    int i,j,n;
    char c[20];
    int arr[20];
    printf("Enter the operations\n m for minstack\np for push\n o for pop\nt for top\nn for min element\n");
    gets(c);
    n=strlen(c);
    printf("Enter the values for operation\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        switch(c[i])
        {
        case 'm':
           {
            x++;
            a[x]=-99;
            break;
        }
        case 'p':
            {
                push(arr[i]);
                x++;
                a[x]=-99;
                break;
            }
        case 'o':
            {
                pop();
                break;
            }
        case 't':
            {
                x++;
                a[x]=stack[top];
                break;
            }
        case 'n':
            {
                getmin();
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n-99 represents null value");
}
void push(int k)
{
    top++;
    stack[top]=k;
}
void pop()
{
    x++;
    a[x]=-99;
    top--;
}
void getmin()
{
    int i,min=stack[top];
    for(i=top-1;i>=0;i--)
    {
        if(stack[i]<min)
        {
            min=stack[i];
        }
    }
    x++;
    a[x]=min;
}
